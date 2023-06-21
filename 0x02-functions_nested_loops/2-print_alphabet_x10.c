#include "main.h"
/**
* print_alphabet_x10 - print alphabet 10 time
* Returns: always 0
*/
void print_alphabet_x10(void)
{
	char az;
	int n;

	for (n = 1; n<= 10; n++)
		for (az = 'a'; az <= 'z'; az++)
			_putchar(az);
		_putchar('\n');

}
