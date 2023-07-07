#include "main.h"

/**
* _strspn - gets length of a prefix substring
* @s: array
* @accept: array
* Return: return number of bytes
*/

unsigned int _strspn(char *s, char *accept)
{
	int l = 0, p = 0;
	unsigned int b = 0;

	while (s[l] != ' ' && s[l] != '\0')
	{
		while (accept[p] != '\0')
		{
			if (s[l] == accept[p])
			{
				b++;
			}
			p++;
		}
		l++;
		p = 0;
	}
	return (b);
}
