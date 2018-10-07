// Author: Jakka Aishwarya
//USN: 1cr13cs035
//Sudoku Puzzle, Computer Graphics Project 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"sudoku.h"
#include<GL/freeglut.h>
#include"drawboard.h"
#include"playfunc.h"

unsigned int board[9][9];
unsigned int board2[9][9];
unsigned int solution[9][9];
unsigned int row_selected  = 0;
unsigned int col_selected  = 0;

unsigned int screen_dim  = 300;

#define ROWS 9
#define COLS 9
/*------------------Gives a final touch to the generated grid ------------------*/
void final(int **grid, int remain, int rowres){
	int k, i, j;
	int max = 9, random;
	time_t tt;
	srand(time(&tt));
	for( k = 0; k < remain ; k++)
	{		
		i = rand() % max;
		j = rand() % max;
		if( grid[i][j] != 0 ){
			grid[i][j] = 0;
		}	
	}
}
/*---------------------------------------------------------------*/

/*---------------checks the no. of zeros-------------------*/
int checkzeros(int **grid){
	int row, col, zero = 0;
	for( row = 0; row < 9; row++)
	{
		for(col = 0; col < 9; col++)
		{
			if(grid[row][col] == 0)
				zero++;
		}
	}
	return zero;
}
/*----------------------------------------------------------*/

/*-------------checks the sudoku Conditions--------------*/
int check(int **grid, int row, int col, int num)
{
	int rowStart = (row/3) * 3;
	int colStart = (col/3) * 3;
	int i, j;

	for(i=0; i<9; ++i)
	{
		if (grid[row][i] == num) 
			return 0;
		if (grid[i][col] == num) 
			return 0;
		if (grid[rowStart + (i%3)][colStart + (i/3)] == num) 
			return 0;
	}
	return 1;
}
/*--------------------------------------------------------*/

/*------------------Solves the grid(Sudoku)---------------------*/
int fillit(int **grid, int row, int col)
{
	int i;
	if(row<9 && col<9)
	{
		if(grid[row][col] != 0)
		{
			if((col+1)<9) 
				return fillit(grid, row, col+1);
			else if((row+1)<9) 
				return fillit(grid, row+1, 0);
			else 
				return 1;
		}
		else
		{
			for(i=0; i<9; ++i)
			{
				if(check(grid, row, col, i+1))
				{
					grid[row][col] = i+1;
					if((col+1)<9)
					{
						if(fillit(grid, row, col +1)) 
							return 1;
						else 
							grid[row][col] = 0;
					}
					else if((row+1) < 9)
					{
						if(fillit(grid, row+1, 0)) 
							return 1;
						else 
							grid[row][col] = 0;
					}
					else 
						return 1;
				}
			}
		}
		return 0;
	}
	else return 1;
}
/*-------------------------------------------------*/

/*-----------fills the grid with random no.--------------*/
void fillinrandom(int **grid){ 		 
	int max = 9, random;
	time_t tt;
	srand(time(&tt));

	int k;
	for( k = 0; k < 11 ; k++ ){
		int i, j;
		i = rand() % max;
		j = rand() % max;
		if( !grid[i][j] ){
			int num = rand() % max + 1;
			while(1) {
				if( check(grid, i, j, num) )
				{
					grid[i][j] = num;
					break;
				}
				else
				{
					num = (num + 1)	% max;
				}
			}
		}
	}
}
/*----------------------------------------------------------*/

/*-----------Makes all the elements of the grid zero-------------*/
void makezero(int **grid){  
	int i, j;
	for( i = 0; i < ROWS; i++ ){
		for( j = 0; j < COLS; j++ )
			grid[i][j] = 0;
	}
}
/*----------------------------------------------------------------*/
/*---------------Copys grid into another--------------------------*/
void copy(int **grid, int **solutiongrid){
	int i, j;
	for( i = 0; i < ROWS; i++ ){
		for( j = 0; j < COLS; j++ )
			solutiongrid[i][j] = grid[i][j];
	}

}
/*--------------------------------------------------------------*/


int main(int argc, char **argv){
	int i, j;
	/*------------Declaring the grid------------------*/
	int **grid =(int **)malloc( ROWS * sizeof(int *) );
	if( grid == NULL ){
		printf("\nError allocating memory\n");
		exit(1);
	}

	for( i = 0 ; i < ROWS ; i++ ) {
		grid[i] =(int *) malloc ( COLS * sizeof(int) );
	}

	if(grid[i-1]==NULL) {
		printf("\nError allocating memory\n");
		exit(1);
	}
	/*------------Declared the Grid--------------------*/	

	/*------------Declaring another empty grid---------*/	
	int **solutiongrid =(int **)malloc( ROWS * sizeof(int *) );
	if( solutiongrid == NULL ){
		printf("\nError allocating memory\n");
		exit(1);
	}
	for( i = 0 ; i < ROWS ; i++ ) {
		solutiongrid[i] =(int *) malloc ( COLS * sizeof(int) );
	}

	if(solutiongrid[i-1]==NULL) {
		printf("\nError allocating memory\n");
		exit(1);
	}
	/*----------------------------------------------------*/	

	/* Makes all the elements of the grid to zero*/
	makezero(grid);
	makezero(solutiongrid);
	/*----------------------------------------*/

	fillinrandom(grid);
	printf("\t\t\t****INSTRUCTIONS****\n\n");
	printf("\tChoose from the levels listed:\n\tA window with a puzzle will pop up.\n\tNAvigate using mouse in the different squares.\n\tFill the digits using Numpad.\n\tPress 'q/Q' to quit game.\n\tPress 's/S' to find solution.\n\tPress 'c/C' to check whether you solved it or not.\n\n\t\t******GOOD LUCK*****\n ");
	int level;
	printf("LEVELS :->\n");
	printf("1.Extremely Easy\n");	
	printf("2.Easy\n");	
	printf("3.Medium\n");	
	printf("4.Difficult\n");	
	printf("5.Evil\n");
	printf("6.Solve a Given Sudoku\n");	
	printf("7.EXIT\n");
	scanf("%d", &level);

	switch(level)
	{
		case 1:
			if(fillit(grid, 0 , 0))
			{
				copy(grid, solutiongrid);	
				exteasy(grid);
			}
			break;
		case 2:
			if(fillit(grid, 0 , 0))
			{	
				copy(grid, solutiongrid);	
				easy(grid);
			}
			break;
		case 3:
			if(fillit(grid, 0 , 0))
			{	
				int holes = 49 - rand() % 4;
				copy(grid, solutiongrid);	
				medium(grid, holes);
				int zeros = checkzeros(grid);
				int remain = holes - zeros;
				final(grid, remain, 3);
			}
			break;
		case 4:
			if(fillit(grid, 0 , 0))
			{
				copy(grid, solutiongrid);	
				int holes = 53 - rand() % 4;
				diffi(grid, holes);
				int zeros = checkzeros(grid);
				int remain = holes - zeros;
				final(grid, remain, 3);
			}
			break;	
		case 5:
			if(fillit(grid, 0 , 0))
			{	
				copy(grid, solutiongrid);	
				int holes = 57 - rand() % 4;
				evil(grid, holes);
				int zeros = checkzeros(grid);
				int remain = holes - zeros;
				final(grid, remain, 3);
			}
			break;
		case 6:
			//int i, j;
			for( i = 0; i < ROWS; i++ ){
				for( j = 0; j < COLS; j++ )
					scanf("%d", &grid[i][j]);
			}	
			fillit(grid, 0, 0);
			break;
		case 7:
			exit(0);
		default:
			printf("Wrong Entry");
			exit(0);
	}
	int x = 0, y = 0;
	for(x = 0; x < 9; x++)
	{
		for(y = 0; y < 9; y++){
			board[x][y] = grid[x][y];
			board2[x][y] = grid[x][y];
			solution[x][y] = solutiongrid[x][y];
		}	
	}
	/*---------------- GLUT Initialization---------------------------*/ 
	glutInit(&argc, argv);
	glutCreateWindow("Sudoku");
	glutInitWindowSize(screen_dim, screen_dim);
	glutReshapeWindow(screen_dim, screen_dim);
	glutInitWindowPosition(50, 50);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
	/*---------------------------------------------------------------------*/

	/*-------------------- glut handling -------------------------------*/
	glutDisplayFunc(display);
	glutKeyboardFunc(keyboard);
	glutIdleFunc(idle);
	glutMouseFunc(mouse);
	glutMainLoop();
	/*---------------------------------------------------------------------*/

	return EXIT_SUCCESS;
}


