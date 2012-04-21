CC = gcc 
CFLAGS = # -O0 -g -DTESTING

PROGS=bzip-table seek-bunzip bzip-table-fosm bzip-table-linecount bzip-table-lines-ragel bziptablelinesragel2

HEADERS= datafile.hpp tagfile.hpp wayfile.hpp fileindexer.hpp fileindexer.hpp ifileindexer.hpp

all: $(PROGS)

bzip-table : bzip-table.c micro-bunzip.c
	g++ $(CFLAGS) bzip-table.c micro-bunzip.c -o $@

bzip-table2 : bzip-table2.c micro-bunzip.c
	g++ $(CFLAGS) bzip-table2.c micro-bunzip.c -o $@

bzip-table-fosm : bzip-table-fosm.c micro-bunzip.c
	g++ $(CFLAGS) bzip-table-fosm.c micro-bunzip.c -o $@

bzip-table-linecount : bzip-table-linecount.c micro-bunzip.c
	g++ $(CFLAGS) bzip-table-linecount.c micro-bunzip.c -o $@

indexer.o : ifileindexer.hpp indexer.c ifileindexer_b.o
	g++ $(CFLAGS) -c indexer.c -o $@ 

indexer.c : indexer.rl
	ragel -G1 indexer.rl

ifileindexer.hpp : ifileindexer.tt
	tpage $< > $@ 	

ifileindexer_b.cpp : ifileindexer_b.tt
	tpage $< > $@ 	

%.o : %.c 
	g++ $(CFLAGS) -c $< -o $@ 	

bziptablelinesragel2 : bzip-table-lines2.o process-fosm.o indexer.o ifileindexer_b.o $(HEADERS)
	g++ $(CFLAGS)  bzip-table-lines2.o process-fosm.o indexer.o ifileindexer_b.o -lbz2 -o $@ 

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

testgeofabrik: bziptablelinesragel2 
	./bziptablelinesragel2   ~/OSM-API-Proxy/data/kosovo.osm.bz2  > test.out

testways: bziptablelinesragel2 
	./bziptablelinesragel2   testway2.osm.bz2  > test.out

testoffenbach: bziptablelinesragel2 
	./bziptablelinesragel2   ~/OSM-API-Proxy/data/offenbach.osm.bz2