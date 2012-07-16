main.exe:main.o shellSort.o
	gcc -Wall -o main.exe main.o shellSort.o 
main.o:main.c
	gcc -Wall -o main.o -c main.c
shellSort.o:shellSort.c
	gcc -Wall -o shellSort.o -c shellSort.c

clean:
	del *.o *.exe *.obj
