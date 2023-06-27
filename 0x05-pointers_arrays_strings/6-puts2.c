#include "main.h"

/**
* puts2 - prints even numbers
* @str: holds value
* Return: always 0
*/

void puts2(char *str)
{
	int l = 0;

	while (str[l] != 0)
	{
		if ((str[l] % 2) == 0)
		{
			_putchar(str[l]);
		}
		else
			continue;
		l++;
	}

	_putchar('\n');
}
