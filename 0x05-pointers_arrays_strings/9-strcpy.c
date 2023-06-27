#include "main.h"

/**
* *_strcpy - copys array
* @dest: holds destination value
* @src: holds array value
* Return: always 0
*/

char *_strcpy(char *dest, char *src)
{
	int l;

	l = 0;

	while (src[l] <= '\0')
	{
		dest[l] = src[l];
		l++;
	}
}
