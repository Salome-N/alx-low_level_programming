#include "main.h"

/**
* more_numbers - prints 10 times numbers from 0 to 14
* Return: always 0
*/

void more_numbers(void)
{
	int l, n, x, y;

	for (l = 1; l <= 10; l++)
	{
		for (n = 0; n <= 14; n++)
		{
			y = n % 10;
			x = (n - y) / 10;

			_putchar(x + '0');
			_putchar(y + '0');
		}
		_putchar('\n');
	}
}
