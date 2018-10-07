// Author: Jakka Aishwarya
//USN: 1cr13cs035
//Sudoku Puzzle, Computer Graphics Project 
#include "drawboard.h"

/*-------------------Draws the borders of the sudoku board to the screen-------------*/
void draw_board(void) {

	int h,v;
	glBegin(GL_LINES);

	/*---- Individual square borders -----*/
	glColor3i(0, 0, 0);
	for( h  = 0; h < 9; ++h) {
		glVertex2f(1,  (.222222222 * h) - 1);
		glVertex2f(-1, (.222222222 * h) - 1);
	}

	for( v  = 0; v < 9; ++v) {
		glVertex2f(-1 + (.222222222 * v),  1);
		glVertex2f(-1 + (.222222222 * v), -1);
	}
	/*-------------------------------------*/

	/*---- Board section borders ----------*/
	glColor3f(.0f, .0f, 255.0f);
	glVertex2f(-1, .333333333);
	glVertex2f( 1, .333333333);

	glVertex2f(-1, -.333333333);
	glVertex2f( 1, -.333333333);
	glVertex2f(-1,  .333333333);
	glVertex2f( 1,  .333333333);

	glVertex2f(-.333333333, -1);
	glVertex2f(-.333333333,  1);

	glVertex2f( .333333333,  1);
	glVertex2f( .333333333, -1);
	/*---------------------------------------*/

	/*---- Border around currently selected square----*/
	glColor3f(255.0f, .0f, .0f);

	//horizontal lines//
	glVertex2f(((row_selected * .222222222) - 1), (1 - ((col_selected + 1) * .222222222)));
	glVertex2f(((row_selected * .222222222) - 1)  + .222222222, (1 - ((col_selected + 1) * .222222222)));

	glVertex2f(((row_selected * .222222222) - 1), (1 - ((col_selected) * .222222222)));
	glVertex2f(((row_selected * .222222222) - 1)  + .222222222, (1 - ((col_selected) * .222222222)));

	//vertical lines//
	glVertex2f(((row_selected * .222222222) - 1), (1 - ((col_selected + 1) * .222222222)));
	glVertex2f(((row_selected * .222222222) - 1), (1 - ((col_selected) * .222222222)));

	glVertex2f((((row_selected + 1) * .222222222) - 1), (1 - ((col_selected + 1) * .222222222)));
	glVertex2f((((row_selected + 1) * .222222222) - 1), (1 - ((col_selected) * .222222222)));
	/*--------------------------------------------------*/

	glEnd();

	glutSwapBuffers();
}
/*------------------------------------------------------------------------------*/
/*---------------Draws the values in the board onto the screen-----------------------*/
void draw_numbers(void) {
	int x,y;
	glColor3f(.1f, .2f, .3f);

	for(x  = 0; x < 9; ++x) {
		for( y  = 0; y < 9; ++y) {
			if(board[x][y]) {
				draw_digit((y * .222222222) - .94, -(x * .222222222) + .81, board[x][y], 5);
			}
		}
	}
}
/*-----------------------------------------------------------------------------*/
