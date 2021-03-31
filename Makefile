
main: main.o print.o
	gcc -o main main.o print.o

main.o:main.c
	gcc -c main.c
print.o:print.c
	gcc -c print.c


.PHONY:clean
clean:
	rm -rf *.o ./main
