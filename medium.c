// Author: Jakka Aishwarya
//USN: 1cr13cs035
//Sudoku Puzzle, Computer Graphics Project 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "sudoku.h"
void medium(int **grid, int holes){
	int i = 0, j = 0, iterctr = 0, k;
	time_t tt;
	srand(time(&tt));
	for (k = 0; k < holes; k++)
	{
		if(i % 2 == 0)
			j = j + 2;
		else
			j = j - 2;
		if(j == 10){
			i = i + 1;
			j = j - 3;
		}
		if(j == 9){
			i = i + 1;
			j = j - 1;
		}
		if(j == -1){
			i = i + 1;
			j = j + 1;
		}
		if(j == -2){
			i = i + 1;
			j = j + 3;
		}
		if( i > 8){
			if(iterctr > 1)
				return;
			else{
				i = 0;
				j = 1;
				iterctr++;
			}
			
		}
		if(grid[i][j] == 0){
			continue;
		}
		int temp = grid[i][j];
		grid[i][j] = 0;
		int num, count = 0;
		for( num = 1; num < 10; num++ )
		{
			if(check(grid, i, j, num))
				count++;
		}
				
		if(count > 2){
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
			if(cnt < 3 || cnt1 < 3){
				grid[i][j] = temp;
				k--;
			}
			else
				grid[i][j] = 0;
		}
	}
	return;
}

