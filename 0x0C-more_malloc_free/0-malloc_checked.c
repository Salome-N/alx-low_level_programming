#include "main.h"

/**
* malloc_checked - check malloc if NULL or not
* @b: variable
* Return: return pointer
*/

void *malloc_checked(unsigned int b)
{
	void *pnt;

	pnt = malloc(b);

	if (pnt == NULL)
	{
		exit(98);
	}

	return (pnt);
}
