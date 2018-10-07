// Author: Jakka Aishwarya
//USN: 1cr13cs035
//Sudoku Puzzle, Computer Graphics Project 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "sudoku.h"
void evil(int **grid, int holes){
	int i, j = 0, iterctr = 0, k;
	time_t tt;
	srand(time(&tt));
	i = rand() % 9;
	int iorig = i + 1;
	for (k = 0; k < holes; k++)
	{
		j = j + 1;
		if( j == 9 ){
			i = i % 9 + 1;
			j = 0;
			if ( i == iorig )
				return;
		}
				
		if(grid[i][j] == 0){
			continue;
		}
		int temp = grid[i][j];
		grid[i][j] = 0;
		int num, count = 0;
			
	}
	return;
}

