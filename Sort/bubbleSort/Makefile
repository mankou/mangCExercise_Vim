main.exe:main.o bubbleSort.o
	gcc -Wall -o main.exe main.o bubbleSort.c 
main.o:main.c
	gcc -Wall -o main.o -c main.c
shellSort.o:bubbleSort.c
	gcc -Wall -o shellSort.o -c bubbleSort.c 

clean:
	del *.o *.exe *.obj
