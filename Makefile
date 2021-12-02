
all : ex-1

ex1.o: ex1.c
	gcc -c ex1.c

ex1: ex1.o 
	gcc ex1.o -o ex1

clean:
	rm -f ${ex}  ${ex}.o
