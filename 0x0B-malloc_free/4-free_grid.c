#include"main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - free 2-dimentional
 * **array created by alloc function
 * @grid: 2-dimentional grid
 * @height: height of the grid
 * Description: free the memory occupied by the grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
