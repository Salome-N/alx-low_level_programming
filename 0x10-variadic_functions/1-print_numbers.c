#include "variadic_functions.h"

/**
* print_numbers - prints all numbers written
* @separator: separates the numbers printed
* @n: number of arguments
* @...: what to be printed
* Return: 0
*/

void print_numbers(const char *separator, const unsigned int n, ...);
{
	va_list arg;

	unsigned int i;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg, int));

		if (i != (n - 1) && separator != NULL)
			printf("%S", separator);
	}

	printf("\n");

	va_end(arg);
}
