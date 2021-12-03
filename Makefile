
objects =\
				 src/ex1\
				 src/ex1b

all: $(objects)

$(objects): %: %.c
	gcc -o $@ $<

clean:
	rm -f *.o build/*.o src/*.o ex1 build/ex1 src/ex1 ex1b build/ex1b src/ex1b
