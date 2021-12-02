file=ex1
src=src/${file}
build=build/${file}
all : ${build}

${build}.o: ${src}.c
	gcc -c ${src}.c -o ${build}.o

${build_ex}: ${build_ex}.o 
	gcc ${build}.o -o ${build}

clean:
	rm -f ${build}  ${build}.o
