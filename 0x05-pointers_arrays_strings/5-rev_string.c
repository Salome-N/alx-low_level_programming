#include "main.h"

/**
* rev_string - prints reverse
* @s: holds string
* Return: always 0
*/

void rev_string(char *s)
{
	char temp;
	int a, l, n;

	l = 0;

	while (s[l] != '\0')
	{
		l++;
	}

	n = l - 1;

	for (a = 0; a < l / 2; a++)
	{
		temp = s[a];
		s[a] = s[n];
		s[n--] = temp;
	}
}
