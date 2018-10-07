// Author: Jakka Aishwarya
//USN: 1cr13cs035
//Sudoku Puzzle, Computer Graphics Project 
#include "playfunc.h"

/*----------This simply clears the screen and check for any errors OpenGL might have.--------*/
void idle(void) {

	glClearColor(0.0f, 0.0f, 0.0f, 1.0f );
	glClear(GL_COLOR_BUFFER_BIT);

	if(glGetError() != GL_NO_ERROR) {
		glutLeaveMainLoop();
	}

	return;
}

/*----------This draws the borders of the board and it draws the values inside of the board to the screen---------*/
void display(void) {

	draw_board();
	draw_numbers();

	glutPostRedisplay();
	return;
}

/*------------This handles user input into squares and other functions--------------*/
void keyboard(unsigned char key, int x, int y) {
	int p = 0, q = 0;
	int flag = 0;
	switch(key) {

		case 'Q'://for quitting the same.
		case 'q':
			glutLeaveMainLoop();
			break;

		case 'S'://solution of the puzzle.
		case 's':
			for(p = 0; p < 9; p++)
			{
				for(q = 0; q < 9; q++){
					board[p][q] = solution[p][q];
				}
			}
			return;	
		case 'C':
		case 'c':
			for(p = 0; p < 9; p++)
			{
				for(q = 0; q < 9; q++){
					if(board[p][q] != solution[p][q]){
						flag = 1;
						break;
					}
				}
				if(flag == 1)
					break;
			}
			if(flag == 1)
				return;
			else
			{
				printf("\t\t\t!!*******SOLVED*******!!\n\n");
				glutLeaveMainLoop();
			}	
		case '1':
			if(board2[col_selected][row_selected] == 0)    
				board[col_selected][row_selected]  = 1;
			return;

		case '2':
			if(board2[col_selected][row_selected] == 0)    
				board[col_selected][row_selected]  = 2;
			return;

		case '3':
			if(board2[col_selected][row_selected] == 0)    
				board[col_selected][row_selected]  = 3;
			return;

		case '4':
			if(board2[col_selected][row_selected] == 0)    
				board[col_selected][row_selected]  = 4;
			return;

		case '5':
			if(board2[col_selected][row_selected] == 0)    
				board[col_selected][row_selected]  = 5;
			return;

		case '6': 
			if(board2[col_selected][row_selected] == 0)    
				board[col_selected][row_selected]  = 6;
			return;

		case '7':
			if(board2[col_selected][row_selected] == 0)      
				board[col_selected][row_selected]  = 7;
			return;

		case '8':
			if(board2[col_selected][row_selected] == 0)    
				board[col_selected][row_selected]  = 8;
			return;

		case '9':
			if(board2[col_selected][row_selected] == 0)    
				board[col_selected][row_selected]  = 9;
			return;

		case '0':
			board[col_selected][row_selected]  = 0;
			return;
	}
	glutPostRedisplay();

}

/*---------sets the value that the user currently has selected.--------------*/
void mouse(int button, int state, int x, int y) {
	row_selected  = x / (screen_dim / 9);
	col_selected  = y / (screen_dim / 9);
}
