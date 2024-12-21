CFLAGS=-DDEBUG

all: main

clean: main main.o pow.o math.o
	rm main main.o pow.o math.o

main: main.o math.o pow.o
	gcc -o main main.o math.o pow.o

main.o: main.c math.h pow.h
	gcc -c -o main.o main.c

math.o: math.c math.h trace.h
	gcc $(CFLAGS) -c -o math.o math.c

pow.o: pow.c pow.h trace.h
	gcc $(CFLAGS) -c -o pow.o pow.c