#include "main.h"
/**
* times_table - shows the table of multiplications of nine
* Return: alwways 0
*/
void times_table(void)
{
	int  a, b, m, x, y;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			m = a * b;
			if (m  > 9)
			{
				y = m % 10;
				x = (m - y) / 10;
				_putchar(42);
				_putchar(32);
				_putchar(x + '0');
				_putchar(y + '0');
			}
			else
			{
				if (b != 0)
				{
					_putchar(42);
					_putchar(32);
					_putchar(32);
				}
				_putchar(m + '0');
			}
		}
		_putchar('\n');
	}
}
