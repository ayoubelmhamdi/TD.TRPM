
objects =\
				 src/ex1\
				 src/ex1b\
				 src/ex2\
				 src/ex3\
				 src/ex4\
				 # src/ex5\
				 # src/ex6\
				 # src/ex7\
				 # src/ex8

all: $(objects)

$(objects): %: %.c
	gcc -o $@ -lm $< 

clean:
	rm -f *.o build/*.o src/*.o ex1 build/ex1 src/ex1 ex1b build/ex1b src/ex1b
