#include "main.h"

/**
* _memcpy - copy certain memory bytes from src to dest
* @dest: variable
* @src: variable
* @n: variable
* Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int l;

	for (l = 0; l < n; l++)
	{
		dest[l] = src[l];
	}

	return (dest);
}
