#include "main.h"

/**
* *_strcpy - copys array
* @dest: holds destination value
* @src: holds array value
* Return: always 0
*/

char *_strcpy(char *dest, char *src)
{
	int l, a;

	l = 0;

	while (src[l] <= '\0')
	{
		l++;
	}

	for (a = 0; a < l; a++)
	{
		dest[l] = src[l];
	}
	dest[l] = '\0';

	return (dest);
}
