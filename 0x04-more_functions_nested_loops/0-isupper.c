#include "main.h"

/**
* _isupper - returns value if it is uppercase or otherwise
* @l - holds value
* Return: 1 if uppercase 0 if otherwise
*/

int _isupper(int l)
{
	if (l >= 65 && l <= 90)
	{
		return (1);
	}
	return (0);
}
