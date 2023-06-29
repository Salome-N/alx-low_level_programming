#include "main.h"

/**
* _strncpy - copy a string to array
* @dest: holds array value
* @src: holds string to be copied
* @n: holds number value
* Return: returns dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int l, p;

	l = 0;
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
