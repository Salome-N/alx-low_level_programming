#include "variadic_functions.h"

void char_print(va_list a);
void int_print(va_list a);
void float_print(va_list a);
void string_print(va_list a);
void print_all(const char * const format, ...);

/**
* char_print - prints a char
* @a: list of arguments
* Return: a char
*/

void char_print(va_list a)
{
	char l;

	l = va_arg(a, int);
	printf("%c", l);
}

/**
* int_print - prints an int
* @a: list of arguments
* Return: an int
*/

void int_print(va_list a)
{
	int n;

	n = va_arg(a, int);
	printf("%d", n);
}

/**
* float_print - prints a float
* @a: list of arguments
* Return: a float
*/
void float_print(va_list a)
{
	float n;

	n = va_arg(a, double);
	printf("%f", n);
}

/**
* string_print - prints a string
* @a: lists of arguments
* Return: a string
*/

void string_print(va_list a)
{
	char *s;

	s = va_arg(a, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", s);
}

/**
* print_all - prints anything
* @format: string of characters representing argument type
* @...: no. of arguments to be printed
* Return: any arguments
*/

void print_all(const char * const format, ...)
{
	va_list arg;
	int i = 0, p = 0;
	char *separator = "";
	prints_t funcs[] = {
		{"c", char_print},
		{"i", int_print},
		{"f", float_print},
		{"s", string_print}
	};

	va_start(arg, format);

	while (format && (*(format + i)))
	{
		p = 0;

		while (p < 4 && (*(format + i) != *(funcs[p].symbol)))
			p++;

		if (p < 4)
		{
			printf("%s", separator);
			funcs[p].print(arg);
			separator = ", ";
		}

		i++;
	}

	printf("\n");

	va_end(arg);
}
