main.exe:main.o binarySearchTree.o
	gcc -Wall -o main.exe main.o binarySearchTree.o

main.o:main.c
	gcc -Wall -o main.o -c main.c
binarySearchTree.o:binarySearchTree.c
	gcc -Wall -o binarySearchTree.o -c binarySearchTree.c

clean:
	del *.obj *.o *.exe
