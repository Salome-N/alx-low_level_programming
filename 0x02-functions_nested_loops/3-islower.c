#include "main.h"
/**
* _islower - checks if character is lower case
* Return: 1 if its lowercase, 0 if not
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
