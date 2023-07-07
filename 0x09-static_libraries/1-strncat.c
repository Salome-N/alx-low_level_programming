#include "main.h"

/**
* _strncat - copy array to another under conditions
* @dest: holds array value
* @src: holds array value
* @n: holds array size
* Return: returns dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int l, p;

	l = 0;

	while (dest[l] != '\0')
	{
		l++;
	}
	p = 0;

	while (p < n && src[p] != '\0')
	{
		dest[l] = src[p];
		l++;
		p++;
	}
	dest[l] = '\0';

	return (dest);
}
