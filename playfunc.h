// Author: Jakka Aishwarya
//USN: 1cr13cs035
//Sudoku Puzzle, Computer Graphics Project 
#include<GL/freeglut.h>
#include<stdio.h>
#include"drawboard.h"

#ifndef GLUT_FUNC_H_INCLUDED
#define GLUT_FUNC_H_INCLUDED

extern unsigned int board[9][9];
extern unsigned int board2[9][9];
extern unsigned int solution[9][9];
extern unsigned int row_selected;
extern unsigned int col_selected;
extern unsigned int screen_dim;

void idle(void);
void display(void);
void keyboard(unsigned char key, int x, int y);
void mouse(int button, int state, int x, int y);

#endif //GLUT_FUNC_H_INCLUDED
