#include "main.h"

/**
* _calloc - allocates memory for an array, using malloc
* @nmemb: variable
* @size: variable
* Return: return string
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int p = 0;
	char *pnt;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pnt = malloc(size * nmemb);

	if (pnt == NULL)
		return (NULL);
	while (p < (nmemb * size))
	{
		pnt[p] = 0;
		p++;
	}

	return (pnt);
}
