main.exe:main.o simpleSelectSort.o
	gcc -Wall -o main.exe main.o simpleSelectSort.o
main.o:main.c
	gcc -Wall -o main.o -c main.c
simpleSelectSort.o:simpleSelectSort.c
	gcc -Wall -o simpleSelectSort.o -c simpleSelectSort.c

clean:
	del *.exe *.o *.obj
