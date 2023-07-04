#include "main.h"

/**
* _memset - fills memory with constant byte
* @s: variable
* @b: variable
* @n: variable
* Return: results
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int l;

	for (l = 0; l < n; l++)
	{
		s[l] = b;
	}

	return (s);
}
