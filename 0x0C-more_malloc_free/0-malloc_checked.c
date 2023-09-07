#include "main.h"

/**
* malloc_checked - allocates memory using malloc
* @b: no. of bytes to be allocated in memory
* Return: ptr to allocated memory
*/

void *malloc_checked(unsigned int b)
{
	void *memory = malloc(b);

	if (memory == NULL)
		exit(98);

	return (memory);
}
