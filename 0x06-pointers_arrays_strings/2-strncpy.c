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
	int l;

	l = 0;

	while (l < n && src[l] != '\0')
	{
		dest[l] = src[l];
		l++;
	}
	while (l < n)
	{
		dest[l] = '\0';
		l++;
	}

	return (dest);
}
