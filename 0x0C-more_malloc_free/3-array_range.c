#include "main.h"

/**
* array_range - creates an array of integers
* @min: min number
* @max: max number
* Return: ptr to array
*/

int *array_range(int min, int max)
{
	int *a, i, s;

	if (min > max)
		return (NULL);

	s = max - min + 1;

	a = malloc(sizeof(int) * s);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < s; i++)
		a[i] = min++;

	return (a);
}
