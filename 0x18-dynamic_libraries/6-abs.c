#include "main.h"
/**
* _abs - checks the absolute value of a number
* @i: holds the value being checked
* Return: i if the value is more than zero,i_val else otherwise
*/
int _abs(int i)
{
	if (i < 0)
	{
		i = i * -1;
		return (i);
	}
	return (i);
}
