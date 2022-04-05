#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees the 2D integer grid created by alloc_grid
 * @grid: pointer to array of ints
 * @height: no. of rows
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

