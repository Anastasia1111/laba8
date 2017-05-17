CC= gcc
CFLAGS= -c -Wall -Werror
Bibl= -I thirdparty
all: mkdirs exe test

mkdirs:
	mkdir -p thirdparty bin build build/src build/test

exe:  build/src/deposit.o build/src/main.o
	$(CC) build/src/deposit.o build/src/main.o -o bin/deposit-calc

build/src/main.o:
	$(CC) $(CFLAGS) -c src/main.c -o build/src/main.o

build/src/deposit.o:
	$(CC) $(CFLAGS) -c src/deposit.c -o build/src/deposit.o

test: comp2 

comp2: build/test/main.o build/test/deposit_test.o
	$(CC) build/test/main.o build/test/deposit_test.o -o bin/deposit-calc-test
	
build/test/deposit_test.o:
	$(CC) $(Bibl) -c src/test/deposit_test.c -o build/test/deposit_test.o
	
build/test/main.o:
	$(CC) $(Bibl) -c src/test/main.c -o build/test/main.o
	
.PHONY: clean

clean:
	rm -rf build/src/ build/test/ bin/ build/ 

