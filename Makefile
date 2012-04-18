CC = gcc -m64
CFLAGS = # -O0 -g -DTESTING

PROGS=bzip-table seek-bunzip bzip-table-fosm bzip-table-linecount bzip-table-lines-ragel

all: $(PROGS)

bzip-table : bzip-table.o micro-bunzip.o
bzip-table-fosm : bzip-table-fosm.o micro-bunzip.o
bzip-table-linecount : bzip-table-linecount.o micro-bunzip.o


indexer.c : indexer.rl
	ragel -G1 indexer.rl

bzip-table-lines-ragel : bzip-table-lines.c micro-bunzip.c process-fosm.cpp indexer.c  fileindexer.hpp
	g++ $(CFLAGS) bzip-table-lines.c micro-bunzip.c process-fosm.cpp indexer.c -o $@

seek-bunzip : seek-bunzip.o micro-bunzip.o

micro-bunzip : micro-bunzip.c
	$(CC) $(CFLAGS) -DMICRO_BUNZIP_MAIN $< -o $@

test: bzip-table seek-bunzip
	# Generate 10 megabytes of random data
	dd if=/dev/random of=test_random.dat bs=1024k count=4
	# Compress but keep original
	bzip2 --force --keep test_random.dat
	# Run bzip2recover to build a seperate bz2 file for each block
	bzip2recover test_random.dat.bz2
	# Build table
	./bzip-table < test_random.dat.bz2 > test_random.dat.bz2t
	# Grab each block using seek-bunzip and compare to recovered block
	nl test_random.dat.bz2t | while read num pos size; \
	do \
		bzip2 -d -c < rec0000$${num}test_random.dat.bz2 > test_expected; \
		./seek-bunzip $${pos} < test_random.dat.bz2 > test_actual; \
		cmp test_expected test_actual; \
		if [ $$? -ne 0 ]; then \
			echo "FAILED: Blocks do not match"; \
			exit 1; \
		fi; \
	done
	@echo "SUCCESS!"

clean:
	rm -f *.o $(PROGS) test* rec00*

format:
	astyle --options=astyle.opts *.c *.h

testfosm: bzip-table-lines-ragel
	./bzip-table-lines-ragel /xapi/planet/earth-20120401130001.osm.bz2
