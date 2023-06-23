#include "main.h"

/**
* print_square - print the square of the size using #
* @size: holds a value
* Return: always 0
*/

void print_square(int size)
{
	int x, y;

	if (size > 0)
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else 
		_putchar('\n');
}
