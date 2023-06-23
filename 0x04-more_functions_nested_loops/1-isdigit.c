#include "main.h"

/**
* _isdigit - checks if c contains a digit
* @c: holds value
* Return: 1 if its a digit otherwise 0
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
