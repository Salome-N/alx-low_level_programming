#include "main.h"
/**
* print_to_98 - prints numbers up to 98 depending on the first digit
* Return: always 0
*/
void print_to_98(int n)
{
	int a, b;

	if (n >= 98)
	{
		b = n % 10;
		a = (n - b) / 10;
		while (n > 98)
		{
			_putchar(a + '0');
			_putchar(b + '0');
 			_putchar(44);
			_putchar(32);
			n --;
		}
		_putchar(a + '0');
		_putchar(b + '0');
		_putchar('\n');
	}
	else
	{
		while (n < 98)
		{
			_putchar(a + '0');
			_putchar(b + '0');
			_putchar(44);
			_putchar(32);
			n ++;
		}
		_putchar(a + '0');
		_putchar(b + '0');
		_putchar('\n');
	}
}
