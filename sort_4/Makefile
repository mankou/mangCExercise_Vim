main.exe:main.o simpleInsertTest.o
	gcc -Wall -o main.exe main.o simpleInsertTest.o 
main.o:main.c
	gcc -Wall -o main.o -c main.c
simpleInsertTest.o:simpleInsertTest.c
	gcc -Wall -o simpleInsertTest.o -c simpleInsertTest.c

clean:
	del *.o *.exe *.obj
