#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * free_grid - function
 *@grid: int variable
 *@height: char variable
 * Return: pointer
 */
void free_grid(int **grid, int height)
{
	int height_i;

	for (height_i = 0; height_i < height; height_i++)
	{
		free(grid[height_i]);
	}
	free(grid);
}
