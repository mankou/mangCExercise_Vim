main.exe:main.o linearSelect.o
	gcc -Wall -o main.exe main.o linearSelect.o
main.o:main.c
	gcc -Wall -o main.o -c main.c
linearSelect.o:linearSelect.c
	gcc -Wall -o linearSelect.o -c linearSelect.c
clean:
	del *.obj *.exe *.o
