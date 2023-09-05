#include "main.h"

/**
* free_grid - frees a 2D grid
* @grid: 2D array to be freed
* @height: height
* Return: zero
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
