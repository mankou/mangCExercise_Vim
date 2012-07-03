main.exe:main.o simpleInsert.o simpleInsertPass.o
	gcc -Wall -o main.exe main.o simpleInsert.o simpleInsertPass.o 
main.o:main.c
	gcc -Wall -o main.o -c main.c
simpleInsert.o:simpleInsert.c
	gcc -Wall -o simpleInsert.o -c simpleInsert.c

simpleInsertPass.o:simpleInsertPass.c
	gcc -Wall -o simpleInsertPass.o -c simpleInsertPass.c
clean:
	del *.o *.exe *.obj
