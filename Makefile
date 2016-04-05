laba: laba.o input.o schr.o
	gcc -o laba laba.o input.o schr.o

laba.o: laba.c
	gcc -c laba.c

input.o: input.c
	gcc -c input.c

schr.o: schr.c
	gcc -c schr.c

stok.o: stok.c
	gcc -c stok.c