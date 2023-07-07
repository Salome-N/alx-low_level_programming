#include "main.h"
/**
* _isalpha - checks if it contains a letter,lowercase or uppercase
* Return: 1 if it contains it 0 if otherwise
* @c: holds the letters to be checked
*/
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
