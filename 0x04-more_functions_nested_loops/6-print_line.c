#include "main.h"

/**
* print_line - print a line by the value of n unless negative
* @n: holds the value
* Return: always 0
*/

void print_line(int n)
{
	int x;

	if (n >= 0)
	{
		for (x = 0; x <= n; x++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
