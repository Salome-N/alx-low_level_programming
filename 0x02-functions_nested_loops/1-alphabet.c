#include "main.h"
/**
* print_alphabet - function to print out the alphabet
* Return: always 0
*/
void print_alphabet(void)
{
	char az;

	for (az = 'a'; az <= 'z'; az++)
		_putchar(az);
	_putchar('\n');
}
