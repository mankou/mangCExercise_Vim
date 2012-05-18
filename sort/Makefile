main.exe:main.o print.o
	gcc -o main.exe main.o print.o
main.o:main.c
	gcc -o main.o -c main.c
print.o:print.c
	gcc -o print.o -c print.c

clean:
	del *.o *.exe
