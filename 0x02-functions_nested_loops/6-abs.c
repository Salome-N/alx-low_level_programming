#include "main.h"
/**
* _abs - checks the absolute value of a number
* @i: holds the value being checked
* @i_val: holds the negative sign value
* Return: i if the value is more than zero,i_val else otherwise
*/
int _abs(int i)
{
	if (i < 0)
	{
		int i_val;

		i_val = i * -1;
		return (i_val);
	}
	return (i);
}
