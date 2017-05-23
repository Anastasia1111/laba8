CC= gcc
CFLAGS= -c -Wall -Werror
Bibl= -I thirdparty


all: mkdirs exe easytest validtest

mkdirs:
	mkdir -p bin build build/src build/test

exe:  build/src/deposit.o build/src/main.o
	$(CC) build/src/deposit.o build/src/main.o -o bin/deposit-calc

build/src/main.o:
	$(CC) $(CFLAGS) -c src/main.c -o build/src/main.o

build/src/deposit.o:
	$(CC) $(CFLAGS) -c src/deposit.c -o build/src/deposit.o



easytest: build/test/main.o build/test/deposit_test.o
	$(CC) build/test/main.o build/test/deposit_test.o -o bin/deposit-calc-test
	
build/test/deposit_test.o:
	$(CC) $(Bibl) -c src/test/deposit_test.c -o build/test/deposit_test.o
	
build/test/main.o:
	$(CC) $(Bibl) -c src/test/main.c -o build/test/main.o



validtest: build/test/main.o build/test/validation_test.o
	$(CC) build/test/main.o build/test/validation_test.o -o bin/validation-test

build/test/validation_test.o:
	$(CC) $(Bibl) -c src/test/validation_test.c -o build/test/validation_test.o
	
build/test/main.o:
	$(CC) $(Bibl) -c src/test/main.c -o build/test/main.o


	
.PHONY: clean

clean:
	rm -rf bin/ build/ 

