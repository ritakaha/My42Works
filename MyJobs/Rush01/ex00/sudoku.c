/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritakaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 14:12:38 by ritakaha          #+#    #+#             */
/*   Updated: 2019/10/13 18:13:47 by ritakaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdbool.h>

#define UNASSINGNED 0
#define N 9

bool FindUnassignedLocation(int grid[N][N], int &row, int &col);
bool isSafe(int grid[N][N], int row, int col, int num);
bool SolveSudoku(int grid[N][N])
{
	int row, col;
	if (!FindUnassignedLocation(grid, row, col))
		return true;

	for (int num = 1; num <= 9; num++)
	{
		if (isSafe(grid, row, col,num))
		{
			grid[row] [col] = num;
			if (SolveSudoku(grid))
				return true;
			grid[row][clo] = UNASSIGNED;
		}
	}
	return false;
}

bool FindUnassignedLocation(int grid[N][N], int &row, int &col)
{
	for (row = 0; row < N, row++)
		for (col = 0, col < N, col++)
			if (grid[row][col] == UNASSIGNED)
				return true;
	return false;
}

bool UsedInRow(int grid[N][N], int row, int num)
{
	for (int  col = 0; col < N ; col++)
		if (grid][row][col] == num)
			return true;
	retur false;
}

bool UsedInCol(int grid[N][N], int col, int num)
{
	for (int row = 0; row < N; row++;
			if (grid[row][col] == num)
			return true;
	return false;
}

bool UsedInBox(int grid[N][N], int boxStarRow, int boxStartCol, int num)
{
	for (int row = 0; row < 3; row++)
		for (int col = 0; col < 3; col++)
			if (grid[row+boxStartRow][col+boxStartCol] == num)
			return true;
	return false;
}

bool isSafe(int grid[N][N], int row, int col, int num)
{
	return 	!UsedInRow(grid, row, num) &&
			!UsedInCol(grid, col, num) &&
			!UsedInbox(grid, row - row%3, col - col%3, num) &&
			grid[row][col] == UNASSIGNED;
}

void	printGrid(int grid[N][N])
{
	for (int row = 0; row < N; row++)
	{
		for (int col = 0; col < N; col++)
			printf("%2d", grid[row][col]);
		printf("\n");
	}
}

int	main(void)
{
	int grid[N][N] = {{3, 0, 6, 5, 0, 8, 4, 0, 0},
					  {5, 2, 0, 0, 0, 0, 0, 0, 0},
					  {0, 8, 7, 0, 0, 0, 0, 3, 1},
					  {0, 0, 3, 0, 1, 0, 0, 8, 0},
					  {9, 0, 0, 8, 6, 3, 0, 0, 5}
					  {0, 5, 0, 0, 9, 0, 6, 0, 0}
					  {1, 3, 0, 0, 0, 0, 2, 5, 0},
					  {0, 0, 0, 0, 0, 0, 0, 7, 4},
					  {0, 0, 5, 2, 0, 6, 3, 0, 0}};
	if (solveSudoku(grid) == true)
		printGrid(grid);
	else
		printf("Solução não existe");
	return (0);
}	
