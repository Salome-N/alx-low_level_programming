#include "main.h"

/**
* alloc_grid - returns a pointer to a 2D array of integers
* @width: width
* @height: height
* Return: ptr to a 2D array of int
*/

int **alloc_grid(int width, int height)
{
	int **d2;
	int h_ind, w_ind;

	if (width <= 0 || height <= 0)
		return (NULL);

	d2 = malloc(sizeof(int *) * height);

	if (d2 == NULL)
		return (NULL);

	for (h_ind = 0; h_ind < height; h_ind++)
	{
		d2[h_ind] = malloc(sizeof(int) * width);

		if (d2[h_ind] == NULL)
		{
			for (; h_ind >= 0; h_ind--)
				free(d2[h_ind]);

			free(d2);
			return (NULL);
		}
	}

	for (h_ind = 0; h_ind < height; h_ind++)
	{
		for (w_ind = 0; w_ind < width; w_ind++)
			d2[h_ind][w_ind] = 0;
	}

	return (d2);
}
