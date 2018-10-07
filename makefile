//Author: Jakka Aishwarya
//USN: 1cr13cs035
//Sudoku Puzzle,
 Computer Graphics Project 
all:
 ./sudoku

project:
 cc main.o exteasy.o easy.o medium.o diffi.o evil.o drawdigit.o drawboard.o playfunc.o
	gcc main.o exteasy.o easy.o medium.o diffi.o evil.o drawdigit.o drawboard.o playfunc.o -o sudoku -lGL -lGLU -lglut

main.o: main.c
	cc -c main.c

easy.o: easy.c
	cc -c easy.c

exteasy.o: exteasy.c
	cc -c exteasy.c

medium.o: medium.c
	cc -c medium.c

diffi.o: diffi.c
	cc -c diffi.c

evil.o: evil.c
	cc -c evil.c

drawdigit.o: drawdigit.c
	cc -c drawdigit.c -lGL -lGLU -lglut

drawboard.o: drawboard.c
	cc -c drawboard.c -lGL -lGLU -lglut	

playfunc.o: playfunc.c
	cc -c playfunc.c -lGL -lGLU -lglut

clean:
	rm *o 

