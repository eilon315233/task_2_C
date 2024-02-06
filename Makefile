# Flags and commands
CC = gcc
AR = ar
CFLAGS = -Wall -g
AFLAGS = rcs

.PHONY: all clean

all: connections

connections: my_graph.o libmymath.a
	$(CC) $(CFLAGS) $^ -o $@

libmymath.a: my_mat.o
	$(AR) $(AFLAGS) $@ $<

main.o: my_graph.c my_mat.h
	$(CC) $(CFLAGS) -c $<

my_mat.o: my_mat.c my_mat.h
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f *.o *.a connections
