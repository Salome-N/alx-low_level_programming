#include "main.h"

/**
* get_endianness - checks the endianness
* Return: one or zero
*/

int get_endianness(void)
{
	unsigned int n = 1;
	char *e = (char *)&n;

	if (*e == 1)
		return (1);

	return (0);
}
