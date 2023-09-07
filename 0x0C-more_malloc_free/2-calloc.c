#include "main.h"

/**
* _calloc - allocates memory for an array
* @nmemb: elements of the array
* @size: bytes per element
* Return: ptr to allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memory;
	char *a;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	memory = malloc(size * nmemb);

	if (memory == NULL)
		return (NULL);

	a = memory;

	for (i = 0; i < (size * nmemb); i++)
		a[i] = '\0';

	return (memory);
}
