#include "main.h"

/**
* factorial - calculate the factorial
* @n: holds variable
* Return: always 0
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
