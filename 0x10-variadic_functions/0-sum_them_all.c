#include "variadic_functions.h"

/**
* sum_them_all - returns the sum of all its parameters
* @n: no. of integers passed
* @...: integers to sum
* Return: sum
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	unsigned int i, sum = 0;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(num, int);
	}

	va_end(num);

	return (sum);
}
