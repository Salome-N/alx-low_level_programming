#include "main.h"

/**
* binary_to_uint - converts a binary number to an unsigned int
* @b: binary to be converted
* Return: int
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0, m = 1;
	int l;

	if (b == NULL)
		return (0);

	for (l = 0; b[l];)
		l++;

	for (l -= 1; l >= 0; l--)
	{
		if (b[l] != '0' && b[l] != '1')
			return (0);

		n += (b[l] - '0') * m;
		m *= 2;
	}

	return (n);
}
