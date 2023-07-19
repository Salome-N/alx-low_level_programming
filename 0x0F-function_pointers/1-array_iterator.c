#include "function_pointers.h"

/**
* array_iterator - executes function given as parameter on each elemnt of array
* @array: an array
* @size: size of array
* @action: pointer to array
* Return: 0 since void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size > 0)
	{
		action(*array);
		array++, size--;
	}
}
