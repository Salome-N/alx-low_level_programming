#include "main.h"

/**
* _strchr - return pointer for a character
* @s: array
* @c: variable
* Return: pointer to variable
*/

char *_strchr(char *s, char c)
{
	if (*s == '\0')
	{
		return (s);
	}

	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (c == '\0')
	{
		return (s);
	}

	return ('\0');
}
