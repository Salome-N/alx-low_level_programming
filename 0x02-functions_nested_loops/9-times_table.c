#include "main.h"
/**
* time_table - shows the table of multiplications of nine
* Return: alwways 0
*/
void times_table(void)
{
	int x, y, t, a, b;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			t = x * y;
			if (t > 0)
			{
				a = t % 10;
				b = (z - a) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(b + '0');
				_putchar(a + '0');
			}
			else
			{
				if (y != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(t + '0');
			}
		}
		_putchar('\n');
	}
}
