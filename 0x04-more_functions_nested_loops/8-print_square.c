#include "main.h"

/**
* print_square - print the square of the size using #
* @size: holds a value
* Return: always 0
*/

void print_square(int size)
{
	int x, y;

	for (x = 1; x <= size; x++)
	{
		for (y = 1; y <= size; y++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
