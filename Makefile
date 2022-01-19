
objects =\
				 TD2/ex01\
				 TD2/ex04\
				 TD2/ex05\
				 TD2/ex06\
				 TD1/ex01\
				 TD1/ex01-b\
				 TD1/ex02\
				 TD1/ex03\
				 TD1/ex04\
				 TD1/ex05\
				 TD1/ex06-a\
				 TD1/ex06-b\
				 TD1/ex07\
				 TD1/ex08\
				 TD1/ex09-1\
				 TD1/ex09-2\
				 TD1/ex09-3\
				 # TD1/ex09-4\

all: $(objects)

$(objects): %: %.c
	gcc -o $@ -lm $< 

clean:
	rm -f *.o TD1/*.o\
  TD1/ex01\
  TD1/ex01-b\
  TD1/ex02\
  TD1/ex03\
  TD1/ex04\
  TD1/ex05\
	TD1/ex06-a\
	TD1/ex06-b\
  TD1/ex07\
  TD1/ex08\
  TD1/ex09-1\
  TD1/ex09-2\
  TD1/ex09-3\
  # TD1/ex09-4\
