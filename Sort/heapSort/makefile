main.exe:main.o heapSort.o
	gcc -Wall -o main.exe main.o heapSort.o
main.o:main.c
	gcc -Wall -o main.o -c main.c
heapSort.o:heapSort.c
	gcc -Wall -o heapSort.o heapSort.c

clean:
	del *.o *.obj *.exe
