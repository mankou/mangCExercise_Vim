main.exe:main.o mangString.o
	gcc -Wall -o main.exe main.o mangString.o
main.o:main.c
	gcc -Wall -o main.o -c main.c
mangString.o:mangString.c
	gcc -Wall -o mangString.o -c mangString.c
clean:
	del *.exe *.obj *.o
