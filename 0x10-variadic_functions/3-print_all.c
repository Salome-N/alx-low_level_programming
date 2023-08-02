#include  "variadic_functions.h"

void charprint(va_list a);
void intprint(va_list a);
void floatprint(va_list a);
void strprint(va_list a);
void print_all(const char * const format, ...);

/**
* charprint - print char
* @a: arguments
* Return: 0
*/

void charprint(va_list a)
{
	char c;

	c = va_arg(a, int);
	printf("%c", c);
}

/**
* intprint - prints integer
* @a: arguments
* Return: 0
*/

void intprint(va_list a)
{
	int n;

	n = va_arg(a, int);
	printf("%d", n);
}

/**
* floatprint - prints float
* @a: arguments
* Return: 0
*/

void floatprint(va_list a)
{
	float n;

	n = va_arg(a, double);
	printf("%f", n);
}

/**
* strprint - prints string
* @a: arguments
* Return: 0
*/

void strprint(va_list a)
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
* print_all - prints char,int,float & string followed by new line
* @format: argument type
* @...: arguments to be printed
* Return: 0
*/

void print_all(const char * const format, ...)
{
	va_list a;
	int n = 0, m = 0;
	char *sep = "";
	printall_t fun[] = {
		{"c", charprint},
		{"i", intprint},
		{"f", floatprint},
		{"s", strprint}
	};

	va_start(a, format);

	while (format && (*(format + n)))
	{
		m = 0;

		while (m < 4 && (*(format + n) != *(fun[m].type)))
			m++;

		if (m < 4)
		{
			printf("%s", sep);
			fun[m].p(a);
			sep = ", ";
		}

		n++;
	}

	printf("\n");

	va_end(a);
}
