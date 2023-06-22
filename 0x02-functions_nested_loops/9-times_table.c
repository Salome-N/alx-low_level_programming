#include "main.h"
/**
* times_table - shows the table of multiplications of nine
* Return: alwways 0
*/
void times_table(void)
{
	int  a, b, m;

	for (a = 0; a <= 9; a++)
	{
		_putchar('0');

		for (b = 0; b <= 9; b++)
		{
			_putchar(',');
			_putchar(' ');

			m = a * b;

			if ( m <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((m / 10) + '0');
			}
			_putchar((m % 10) + '0');
		}
		_putchar('\n');
	}
}
