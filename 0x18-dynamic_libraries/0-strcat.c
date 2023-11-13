#include "main.h"

/**
* _strcat - copy one array to the other
* @dest: holds array value
* @src: holds array value
* Return: always 0
*/

char *_strcat(char *dest, char *src)
{
	int l, p;

	l = 0;

	while (dest[l] != '\0')
	{
		l++;
	}
	p = 0;

	while (src[p] != '\0')
	{
		dest[l] = src[p];
		p++;
		l++;
	}

	dest[l] = '\0';

	return (dest);
}
