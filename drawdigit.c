// Author: Jakka Aishwarya
//USN: 1cr13cs035
//Sudoku Puzzle, Computer Graphics Project 
#include "drawdigit.h"

/*--------------------The following Functions draw digits------------------------*/   
 
void draw_zero(float x_position, float y_position, float size) {

	glVertex2f(x_position               , y_position);
	glVertex2f(x_position + (.02 * size), y_position);

	glVertex2f(x_position               , y_position + (.03 * size));
	glVertex2f(x_position + (.02 * size), y_position + (.03 * size));

	glVertex2f(x_position, y_position);
	glVertex2f(x_position, y_position + (.03 * size));

	glVertex2f(x_position + (.02 * size), y_position + (.03 * size));
	glVertex2f(x_position + (.02 * size), y_position);

	glVertex2f(x_position + (.01 * size), y_position + (.01 * size));
	glVertex2f(x_position + (.01 * size), y_position + (.02 * size));
}

void draw_one(float x_position, float y_position, float size) {

	glVertex2f(x_position + (.005 * size), y_position);
	glVertex2f(x_position + (.015 * size), y_position);

	glVertex2f(x_position + (.01  * size), y_position);
	glVertex2f(x_position + (.01  * size), y_position + (.03 * size));

	glVertex2f(x_position + (.005 * size), y_position + (.03 * size));
	glVertex2f(x_position + (.010 * size), y_position + (.03 * size));

}

void draw_two(float x_position, float y_position, float size) {

	glVertex2f(x_position, y_position + (.025 * size));
	glVertex2f(x_position, y_position + (.03  * size));

	glVertex2f(x_position, y_position + (.03  * size));
	glVertex2f(x_position + (.02 * size), y_position + (.03  * size));

	glVertex2f(x_position + (.02 * size), y_position + (.03  * size));
	glVertex2f(x_position, y_position + (.01  * size));

	glVertex2f(x_position, y_position + (.01  * size));
	glVertex2f(x_position, y_position);

	glVertex2f(x_position, y_position);
	glVertex2f(x_position + (.02 * size), y_position);
}

void draw_three(float x_position, float y_position, float size) {

	glVertex2f(x_position, y_position + (.025 * size));
	glVertex2f(x_position, y_position + (.03  * size));

	glVertex2f(x_position, y_position + (.03  * size));
	glVertex2f(x_position + (.02 * size), y_position + (.03  * size));

	glVertex2f(x_position + (.02 * size), y_position + (.03  * size));
	glVertex2f(x_position + (.02 * size), y_position + (.02  * size));

	glVertex2f(x_position + (.02 * size), y_position + (.02  * size));
	glVertex2f(x_position + (.015 * size), y_position + (.015  * size));

	glVertex2f(x_position + (.015 * size), y_position + (.015  * size));
	glVertex2f(x_position + (.02 * size), y_position + (.01  * size));

	glVertex2f(x_position + (.02 * size), y_position + (.01  * size));
	glVertex2f(x_position + (.02 * size), y_position);

	glVertex2f(x_position + (.02 * size), y_position);
	glVertex2f(x_position, y_position);

	glVertex2f(x_position, y_position);
	glVertex2f(x_position, y_position + (.005 * size));
}

void draw_four(float x_position, float y_position, float size) {

	glVertex2f(x_position, y_position + (.03  * size));
	glVertex2f(x_position, y_position + (.015  * size));

	glVertex2f(x_position, y_position + (.015  * size));
	glVertex2f(x_position + (.02 * size), y_position + (.015  * size));

	glVertex2f(x_position + (.015 * size), y_position + (.03  * size));
	glVertex2f(x_position + (.015 * size), y_position);
}

void draw_five(float x_position, float y_position, float size) {

	glVertex2f(x_position + (.02 * size), y_position + (.03  * size));
	glVertex2f(x_position, y_position + (.03  * size));

	glVertex2f(x_position, y_position + (.03  * size));
	glVertex2f(x_position, y_position + (.02  * size));

	glVertex2f(x_position, y_position + (.02  * size));
	glVertex2f(x_position + (.015 * size), y_position + (.02  * size));

	glVertex2f(x_position + (.015 * size), y_position + (.02  * size));
	glVertex2f(x_position + (.02 * size), y_position + (.015  * size));

	glVertex2f(x_position + (.02 * size), y_position + (.015  * size));
	glVertex2f(x_position + (.02 * size), y_position + (.005  * size));

	glVertex2f(x_position + (.02 * size), y_position + (.005  * size));
	glVertex2f(x_position + (.015 * size), y_position);

	glVertex2f(x_position + (.015 * size), y_position);
	glVertex2f(x_position + (.005 * size), y_position);

	glVertex2f(x_position + (.005 * size), y_position);
	glVertex2f(x_position, y_position + (.005 * size));
}

void draw_six(float x_position, float y_position, float size) {

	glVertex2f(x_position + (.02 * size), y_position + (.03  * size));
	glVertex2f(x_position + (.005 * size), y_position + (.03  * size));

	glVertex2f(x_position + (.005 * size), y_position + (.03  * size));
	glVertex2f(x_position, y_position + (.025  * size));

	glVertex2f(x_position, y_position + (.025  * size));
	glVertex2f(x_position, y_position + (.005  * size));

	glVertex2f(x_position, y_position + (.005  * size));
	glVertex2f(x_position + (.005  * size), y_position);

	glVertex2f(x_position + (.005  * size), y_position);
	glVertex2f(x_position + (.015  * size), y_position);

	glVertex2f(x_position + (.015  * size), y_position);
	glVertex2f(x_position + (.02  * size), y_position + (.005 * size));

	glVertex2f(x_position + (.02  * size), y_position + (.005 * size));
	glVertex2f(x_position + (.02  * size), y_position + (.015 * size));

	glVertex2f(x_position + (.02  * size), y_position + (.015 * size));
	glVertex2f(x_position + (.015  * size), y_position + (.02 * size));

	glVertex2f(x_position + (.015  * size), y_position + (.02 * size));
	glVertex2f(x_position + (.005  * size), y_position + (.02 * size));

	glVertex2f(x_position + (.005  * size), y_position + (.02 * size));
	glVertex2f(x_position, y_position + (.015 * size));
}

void draw_seven(float x_position, float y_position, float size) {


	glVertex2f(x_position, y_position + (.025  * size));
	glVertex2f(x_position, y_position + (.03  * size));

	glVertex2f(x_position + (.02 * size), y_position + (.03  * size));
	glVertex2f(x_position, y_position + (.03  * size));

	glVertex2f(x_position + (.02 * size), y_position + (.03  * size));
	glVertex2f(x_position + (.02 * size), y_position + (.02  * size));

	glVertex2f(x_position + (.02 * size), y_position + (.02  * size));
	glVertex2f(x_position, y_position);
}

void draw_eight(float x_position, float y_position, float size) {

	glVertex2f(x_position, y_position + (.02  * size));
	glVertex2f(x_position, y_position + (.025 * size));

	glVertex2f(x_position, y_position + (.025 * size));
	glVertex2f(x_position + (.005 * size), y_position + (.03 * size));

	glVertex2f(x_position + (.005 * size), y_position + (.03 * size));
	glVertex2f(x_position + (.015 * size), y_position + (.03 * size));

	glVertex2f(x_position + (.015 * size), y_position + (.03  * size));
	glVertex2f(x_position + (.02  * size), y_position + (.025 * size));

	glVertex2f(x_position + (.02  * size), y_position + (.025 * size));
	glVertex2f(x_position + (.02  * size), y_position + (.02  * size));

	glVertex2f(x_position + (.02  * size), y_position + (.02 * size));
	glVertex2f(x_position, y_position + (.01 * size));

	glVertex2f(x_position, y_position + (.01  * size));
	glVertex2f(x_position, y_position + (.005 * size));

	glVertex2f(x_position, y_position + (.005 * size));
	glVertex2f(x_position + (.005 * size), y_position);

	glVertex2f(x_position + (.005 * size), y_position);
	glVertex2f(x_position + (.015 * size), y_position);

	glVertex2f(x_position + (.015 * size), y_position);
	glVertex2f(x_position + (.02  * size), y_position + (.005 * size));

	glVertex2f(x_position + (.02  * size), y_position + (.005 * size));
	glVertex2f(x_position + (.02  * size), y_position + (.01  * size));

	glVertex2f(x_position + (.02  * size), y_position + (.01  * size));
	glVertex2f(x_position, y_position + (.02  * size));
}

void draw_nine(float x_position, float y_position, float size) {

	glVertex2f(x_position, y_position);
	glVertex2f(x_position + (.02  * size), y_position + (.025  * size));

	glVertex2f(x_position + (.02  * size), y_position + (.025  * size));
	glVertex2f(x_position + (.015  * size), y_position + (.03  * size));

	glVertex2f(x_position + (.015  * size), y_position + (.03  * size));
	glVertex2f(x_position + (.005  * size), y_position + (.03  * size));

	glVertex2f(x_position + (.005  * size), y_position + (.03  * size));
	glVertex2f(x_position, y_position + (.025  * size));

	glVertex2f(x_position, y_position + (.025  * size));
	glVertex2f(x_position, y_position + (.020  * size));

	glVertex2f(x_position, y_position + (.020  * size));
	glVertex2f(x_position + (.005  * size), y_position + (.015  * size));

	glVertex2f(x_position + (.005  * size), y_position + (.015  * size));
	glVertex2f(x_position + (.012  * size), y_position + (.015  * size));
}

/*-----------------Draws the specified digit to the specified coordinates-----------------*/

void draw_digit(float x_position, float y_position, int digit, float size) {

	glClearColor(255, 255, 255, 1);
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_LINES);

	switch(digit) {

		case 0:
			draw_zero(x_position, y_position, size);
			return;

		case 1:
			draw_one(x_position, y_position, size);
			return;

		case 2:
			draw_two(x_position, y_position, size);
			return;

		case 3:
			draw_three(x_position, y_position, size);
			return;

		case 4:
			draw_four(x_position, y_position, size);
			return;

		case 5:
			draw_five(x_position, y_position, size);
			return;

		case 6:
			draw_six(x_position, y_position, size);
			return;

		case 7:
			draw_seven(x_position, y_position, size);
			return;

		case 8:
			draw_eight(x_position, y_position, size);
			return;

		case 9:
			draw_nine(x_position, y_position, size);
			return;

		default:
			return;
	}

	glEnd();
	glutSwapBuffers();
}
