#include "main.h"
/**
* print_last_digit - get the last digit
* @i: holds the variable for calculation
* Return: return i
*/
int print_last_digit(int i)
{
	i = i % 10;
	if (i < 0)
	{
		i = i * -1;
	}
	_putchar(i + '0');
	return (i);
}
