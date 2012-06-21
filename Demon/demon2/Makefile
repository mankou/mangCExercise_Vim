main.exe:main.o print.o
	gcc -Wall -o main.exe main.o print.o
main.o:main.c
	gcc -Wall -o main.o -c main.c
print.o:print.c
	gcc -Wall -o print.o -c print.c

clean:
	del *.o *.exe
