CC=gcc

main: main.o

main.o: main.c

clean:
	rm -f main main.o
