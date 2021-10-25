CC = gcc
CFLAGS =
LIB =

all: main

hello:
	$(CC) $(CFLAGS) -c hello.c

mymath:
	$(CC) $(CFLAGS) -c my_math.c

main:hello mymath
	$(CC) $(CFLAGS) hello.o my_math.c main.c -o main.exe

run:
	./main.exe

clean:
	rm main.exe
