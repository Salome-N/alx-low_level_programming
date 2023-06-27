#include "main.h"

/**
* rev_string - prints reverse
* @s: holds string
* Return: always 0
*/

void rev_string(char *s)
{
	int a, l;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	for (l = a - 1; l >= 0; l--)
	{
		_putchar(s[l]);
	}

	_putchar('\n');
}
