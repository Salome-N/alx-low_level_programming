#include "main.h"
#include <string.h>

/**
* _strlen - length of string
* @s: holds string
* Return: always 0
*/

int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}

	return (l);
}
