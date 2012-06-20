main.exe:main.o simpleInsert.o
	gcc -Wall -o main.exe main.o simpleInsert.o 
main.o:main.c
	gcc -Wall -o main.o -c main.c
simpleInsert.o:simpleInsert.c simpleInsertPass.c
	gcc -Wall -o simpleInsert.o simpleInsert.c simpleInsertPass.c

clean:
	del *.o *.exe
