#include "main.h"

/**
* array_range - creates an array of integers
* @min: variable
* @max: variable
* Return: return array
*/

int *array_range(int min, int max)
{
	int p, a, *pnt;

	if (min > max)
		return (NULL);

	pnt = malloc(sizeof(int) * ((max - min) + 1));

	if (pnt == NULL)
		return (NULL);

	p = 0;
	a = min;

	while (a <= max)
	{
		pnt[p] = a;
		p++, a++;
	}

	return (pnt);
}
