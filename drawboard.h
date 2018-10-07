// Author: Jakka Aishwarya
//USN: 1cr13cs035
//Sudoku Puzzle, Computer Graphics Project 
#include <GL/freeglut.h>
#include <stdio.h>
#include "drawdigit.h"

#ifndef BOARD_HELPER_H_INCLUDED
#define BOARD_HELPER_H_INCLUDED

extern unsigned int board[9][9];
extern unsigned int board2[9][9];
extern unsigned int solution[9][9];
extern unsigned int row_selected;
extern unsigned int col_selected;

void draw_board(void);
void draw_numbers(void);
#endif //BOARD_HELPER_H_INCLUDED
