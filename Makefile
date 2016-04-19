laba: laba.o input.o schr.o slen.o
	gcc -o laba laba.o input.o schr.o slen.o

laba.o: laba.c
	gcc -c laba.c

input.o: input.c
	gcc -c input.c

schr.o: schr.c
	gcc -c schr.c

stok.o: stok.c
	gcc -c stok.c

slen.o: slen.c
	gcc -c slen.c