// Author: Jakka Aishwarya
//USN: 1cr13cs035
//Sudoku Puzzle, Computer Graphics Project 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "sudoku.h"
void easy(int **grid){
	
	int i, j, max = 14, k;
	time_t tt;
	srand(time(&tt));
	int holes = 45 - rand() % max;
	for (k = 0; k < holes; k++)
	{	
	
		i = rand() % 9;
		j = rand() % 9;
		
		if(grid[i][j] == 0){
			i = (i + 1) % 9;
			j = (j + 1) % 9;	
		}
		int temp = grid[i][j];
		grid[i][j] = 0;
		int num, count = 0;
		for( num = 1; num < 10; num++ )
		{
			if(check(grid, i, j, num))
				count++;
		}
				
		if(count > 1){
			grid[i][j] = temp;
			k--;
		}
		else{
			int x, cnt = 0, cnt1 = 0;
			for(x = 0; x < 9; x++)
			{	
				if(grid[i][x])
					cnt++;
				if(grid[x][j])
					cnt1++;		
			}
			if(cnt < 4 || cnt1 < 4){
				grid[i][j] = temp;
				k--;
			}
			else
				grid[i][j] = 0;
		}
	}
	return;
}

