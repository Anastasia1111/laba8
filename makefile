CC= gcc
CFLAGS= -c -Wall -Werror

all: mkdirs exe test

mkdirs:
	mkdir -p thirdparty bin build build/src build/test

exe: main.o dep.o
	$(CC) build/main.o build/deposit.o -o bin/prog.exe

main.o:
	$(CC) $(CFLAGS) -c src/main.c -o build/main.o

dep.o:
	$(CC) $(CFLAGS) -c src/deposit.c -o build/deposit.o

test: comp2 

comp2: main.o 
	$(CC) test/main.o test/ctest.o -o te/prog.exe
	gcc -I thirdparty src -c test/deposit_test.c -o build/test/deposit_test.o
.PHONY: clean

clean:
	rm -rf build/src/ build/test/ bin/ build/ 

