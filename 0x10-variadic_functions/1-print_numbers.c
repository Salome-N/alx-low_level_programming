#include "variadic_functions.h"

/**
* print_numbers - prints numbers, followed by a new line
* @separator: separator for the no. when printed
* @n: no. of numbers to be printed
* @...: umbers to be printed
* Return: print the numbers
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(num);
}
