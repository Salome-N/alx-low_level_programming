#include "main.h"

/**
* flip_bits - returns the number of bits you would
* need to flip to get from one number to another
* @n: number
* @m: number to be flip to n
* Return: bit
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int b = 0, x = n ^ m;

	while (x > 0)
	{
		b += (x & 1);
		x >>= 1;
	}

	return (b);
}
