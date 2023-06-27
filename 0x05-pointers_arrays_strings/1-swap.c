#include "main.h"

/**
* swap_int - swap values
* @a: holds pointer
* @b: holds pointer
* Return: always 0
*/

void swap_int(int *a, int *b)
{
	int x, y;

	x = a;
	y = b;
	*a = y;
	*b = x;
}
