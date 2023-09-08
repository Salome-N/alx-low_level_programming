#include "main.h"

/**
* _realloc - reallocates a memory block using malloc and free
* @ptr: pointer to previously allocated memory
* @old_size: size in bytes of the allocated space for ptr
* @new_size: new size, in bytes of the new memory block
* Return: new memory allocated
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *memory;
	char *p, *a;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		memory = malloc(new_size);

		if (memory == NULL)
			return (NULL);

		return (memory);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	p = ptr;
	memory = malloc(sizeof(*p) * new_size);

	if (memory == NULL)
	{
		free(ptr);
		return (NULL);
	}

	a = memory;

	for (i = 0; i < old_size && i < new_size; i++)
		a[i] = *p++;

	free(ptr);
	return (memory);
}
