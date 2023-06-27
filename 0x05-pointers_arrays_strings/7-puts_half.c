#include "main.h"

/**
* puts_half - puts half of the string
* @str: holds string
* Return: always 0
*/

void puts_half(char *str)
{
	int l, a;

	l = 0;

	while (str[l] != '\0')
	{
		l++;
	}

	a = l / 2;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}

	_putchar('\n');
}
