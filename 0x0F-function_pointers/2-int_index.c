#include "function_pointers.h"

/**
* int_index - function that searches for an integer
* @array: an array
* @size: size of array
* @cmp: pointer to compare values
* Return: always 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == 0 || cmp == 0 || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
}
