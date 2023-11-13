#include "main.h"

/**
* _strpbrk - print the the occurence of any byte inthe string
* @s: array
* @accept: array
* Return: remaining array
*/

char *_strpbrk(char *s, char *accept)
{
	int l = 0;

	while (*s)
	{
		while (accept[l] != '\0')
		{
			if (*s == accept[l])
			{
				return (s);
			}
			l++;
		}
		l = 0;
		s++;
	}

	return ('\0');
}
