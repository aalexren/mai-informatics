CCFLAGS = -g -Wall -std=c99

main: main.o stack_static.o
	gcc $(CCFLAGS) -o main main.o stack_static.o
main.o: main.c stack_static.h
	gcc -c $(CCFLAGS) main.c
stack_static.o: stack_static.c stack_static.h
	gcc -c $(CCFLAGS) stack_static.c