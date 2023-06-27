#include <stdio.h>
#include "main.h"

/**
* print_array - print array value depending on position
* @a: holds values
* @n: holds path
* Return: always 0
*/

void print_array(int *a, int n)
{
	*n = &a;

	printf("%s\n", n);
}
