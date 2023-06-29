#include "main.h"

/**
* _strcmp - compare 2 string in arrays
* @s1: holds string value
* @s2: holds string value
* Return: always 0 but if diff return diff
*/

int _strcmp(char *s1, char *s2)
{
	int l1, l2;

	l1 = 0;
	l2 = 0;

	while (s1[l1] != '\0' && s2[l2] != '\0')
	{
		if (s1[l1] != s2[l2])
		{
			return (s1[l1] - s2[l2]);
		}

		l1++;
		l2++;
	}

	return (0);
}
