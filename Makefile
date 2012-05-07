CC = gcc 
CFLAGS = -g -O0 
#-save-temps 
LANGUAGE = C
LC_ALL = C
LANG = "us_us"

PROGS=indexer

all: $(PROGS) 

indexer: intervalmap.cpp stl_tree.h
	g++ $(CFLAGS) intervalmap.cpp -o indexer

test : indexer 
	./indexer  fosm-20120401130001-idx-xaaaa.txt 
