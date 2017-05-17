CC= gcc
CFLAGS= -c -Wall -Werror

all: mkdirs exe 

mkdirs:
	mkdir -p bin build

exe: main.o dep.o
	$(CC) build/main.o build/deposit.o -o bin/prog.exe

main.o:
	$(CC) $(CFLAGS) -c src/main.c -o build/main.o

dep.o:
	$(CC) $(CFLAGS) -c src/deposit.c -o build/deposit.o

.PHONY: clean

clean:
	rm -rf bin/ build/

