CC=gcc
FLAGS = -Wall -g


#make all
all: graph

#make graph
graph: main.o graph.h
	$(CC) $(FLAGS) -o graph main.o

main.o: main.c graph.h Queue.c Node.c Edge.c
	$(CC) $(FLAGS) -c main.c

.PHONY: clean all
#make clean
clean:
	rm -f *.o *.a graph
