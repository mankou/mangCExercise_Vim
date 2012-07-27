main.exe:main.o quickSort.o
	gcc -Wall -o main.exe main.o quickSort.o
main.o:main.c
	gcc -Wall -o main.o -c main.c
quickSort.o:quickSort.c
	gcc -Wall -o quickSort.o -c quickSort.c

clean:
	del *.o *.exe *.obj

