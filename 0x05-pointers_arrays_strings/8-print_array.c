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
	int l;

	for (l = 0; l < n; l++)
	{
		if (l == 0)
		{
			printf("%d", a[l]);
		}
		else
		{
			printf(", %d", a[l]);
		}
	}

	printf("\n");
}
