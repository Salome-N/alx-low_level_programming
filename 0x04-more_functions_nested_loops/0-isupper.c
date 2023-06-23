#include "main.h"

/**
* _isupper - returns value if it is uppercase or otherwise
* @c: holds value
* Return: 1 if uppercase 0 if otherwise
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	return (0);
}
