#include "main.h"

/**
* puts_half - puts half of the string
* @str: holds string
* Return: always 0
*/

void puts_half(char *str)
{
	int l, a, b;

	l = 0;

	while (str[l] != '\0')
	{
		l++;
	}

	if (l % 2 == 0)
	{
		for (a = l / 2; str[a] != '\0'; a++)
		{
			_putchar(str[a]);
		}
		else if (l % 2)
		{
			for (b = (l - 1) / 2; b < l - 1; b++)
			{
				_putchar(str[b + 1]);
			}
		}
	}

	_putchar('\n');
}
