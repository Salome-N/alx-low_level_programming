#include "variadic_functions.h"

/**
* sum_them_all - sums all numbers listed
* @n: number of arguments passed
* @...: what to calculate the sum
* Return: sum
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	unsigned int sum = 0, i;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(num, int);
	}

	va_end(num);

	return (sum);
}
