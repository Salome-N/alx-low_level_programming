#include "main.h"
/**
* print_sign - checks the symbol and returns otherwise
* @n: wariable that holds the symbol
* Return: 1 if greater than 0,-1 if than 0, 0 else otherwise
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
