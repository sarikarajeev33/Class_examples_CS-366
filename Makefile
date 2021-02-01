CC=gcc
FLAGS=-Wall

myprogram: callsomething.o myfunction.o
	$(CC) $(FLAGS) myfunction.o callsomething.o -o myprogram

callsomething.o: myfunction.h callsomething.c
	$(CC) $(FLAGS) -c callsomething.c

myfunction.o: myfunction.c
	$(CC) $(FLAGS) -c myfunction.c

clean:
	rm *o myprogram
