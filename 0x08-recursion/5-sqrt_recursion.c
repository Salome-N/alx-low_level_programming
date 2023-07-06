#include "main.h"

/**
* _sqrt - calculates the square root
* @a: variable
* @b: variable
* Return: always 0
*/

int _sqrt(int a, int b)
{
	if (b * b > a)
	{
		return (-1);
	}
	if (b * b == a)
	{
		return (b);
	}
	return (_sqrt(a, b + 1));
}

/**
* _sqrt_recursion - finds the squareroot of the number
* @n: variable
* Return: always 0
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt(n, 0));
}
