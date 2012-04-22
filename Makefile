CC = gcc 
CFLAGS = -O0 -g -DTESTING

PROGS=bzip-table seek-bunzip bzip-table-fosm bzip-table-linecount ragelosm

HEADERS= datafile.hpp tagfile.hpp wayfile.hpp fileindexer.hpp fileindexer.hpp ifileindexer.hpp

all: $(PROGS) all2

FOSMBin.o : FOSMBin.cpp FOSMBin.hpp
	g++ $(CFLAGS) -c $< -o $@ 	


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

ifileindexer_b.cpp : ifileindexer_b.tt $(HEADERS)
	tpage $< > $@ 	

%.o : %.c 
	g++ $(CFLAGS) -c $< -o $@ 	

ifileindexer_b.o : ifileindexer_b.cpp $(HEADERS)
	g++ $(CFLAGS) -c $< -o $@ 	

ragelosm : bzip-table-lines2.o process-fosm.o indexer.o ifileindexer_b.o $(HEADERS)
	g++ $(CFLAGS)  bzip-table-lines2.o process-fosm.o indexer.o ifileindexer_b.o -lbz2 -o 

ragelosm : bzip-table-lines2.o process-fosm.o indexer.o ifileindexer_b.o $(HEADERS)
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

testgeofabrik: ragelosm 
	./ragelosm   ~/OSM-API-Proxy/data/kosovo.osm.bz2  > test.out

testways: ragelosm 
	./ragelosm   testway2.osm.bz2  > test.out

testoffenbach: ragelosm 
	./ragelosm   ~/OSM-API-Proxy/data/offenbach.osm.bz2

viz : indexer.rl
	ragel -V indexer.rl > indexer.dot
	dotty indexer.dot

#
all2 : strgcomp componentsreadbin readalldata conncomp waysreadbin hierachy metisexport metisexport2
	echo done
#bgl 
#
bgl :
	mpiCC -o bgl  bgl.cpp -lboost_system -lboost_mpi 

strgcomp : strongcomponents.cpp
	mpiCC -g -o strgcomp  strongcomponents.cpp -lboost_system  -lboost_graph
#-save-temps
metisexport : metisexport.cpp
	g++ -g -o metisexport  metisexport.cpp 

metisexport2 : metisexport2.cpp
	g++ -g -o metisexport2  metisexport2.cpp -lboost_system  -lboost_graph

conncomp : conncomponents.cpp
	mpiCC -g -o conncomp  conncomponents.cpp -lboost_system  -lboost_graph

componentsreadbin : componentsreadbin.c
	gcc -o componentsreadbin componentsreadbin.c
# use this to create a pack file perl process_components.pl


readalldata : readalldata.cpp FOSMBin.hpp FOSMBin.o
	g++ -g -o readalldata readalldata.cpp FOSMBin.o

waysreadbin : waysreadbin.c 
	g++ -o waysreadbin waysreadbin.c

dumplatlon : dumplatlon.cpp FOSMBin.hpp
	g++ -o dumplatlon dumplatlon.cpp

hierachy : hierarchybuilder.cpp FOSMBin.hpp FOSMBin.o
	g++ -o hierachy hierarchybuilder.cpp FOSMBin.o


testral: readalldata
	./readalldata

retest : testoffenbach testral
	echo ok