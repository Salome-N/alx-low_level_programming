 #include "main.h"

/**
* free_grid - frees a 2 dimensional grid previously created
* @grid: grid created
* @height: height
* Return: return free grid
*/

void free_grid(int **grid, int height)
{
	int p;

	for (p = 0; p < height; p++)
	{
		free(grid[p]);
	}

	free(grid);
}
