CC = gcc
CFLAGS = -Wall
LDFLAGS = -fopenmp -pg

all : prog

prog : main.o matri.o
		$(CC) $(LDFAGS) -o $@ $^

main.o :main.c matri.h
		$(CC) $(CFLAGS) -c -o $@ $<


matri.o :matri.c matri.h
		$(CC) $(CFLAGS) -c -o $@ $<

clean :
		rm -f *.o prog


.PHONY : clean
