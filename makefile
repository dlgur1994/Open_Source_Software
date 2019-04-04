a.out: 21400611.o 21800622.o main.o
	gcc -o a.out 21400611.o 21800622.o main.o

21400611.o: 21400611.c
	gcc -c -o 21400611.o 21400611.c

21800622.o: 21800622.c
	gcc -c -o 21800622.o 21800622.c

main.o: main.c
	gcc -c -o main.o main.c

clean:
	rm a.out 21400611.o 21800622.o main.o
