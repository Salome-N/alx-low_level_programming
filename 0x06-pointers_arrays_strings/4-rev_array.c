#include "main.h"

/**
* reverse_array - copies array in reverse
* @a: holds array value
* @n: holds number value
* Return: always 0
*/

void reverse_array(int *a, int n)
{
	int l, b;

	for (l = 0; l < n--; l++)
	{
		b = a[l];
		a[l] = a[n];
		a[n] = b;
	}
}
