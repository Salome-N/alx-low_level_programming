#include "variadic_functions.h"

/**
* print_strings - prints all strings
* @separator: separates the strings
* @n: number of arguments
* @...: what to be printed
* Return: 0
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	char *s;
	unsigned int i;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(arg, char *);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(arg);
}
