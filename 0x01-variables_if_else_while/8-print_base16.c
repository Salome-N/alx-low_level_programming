#include <stdio.h>
/**
* main - entry point
* Description: print all numbers of base 16
* Return: always 0
*/
int main(void)
{
	int num, af;

	for (num = 48; num <= 57; num++)
		putchar(num);
	for (af = 97; af <= 102; af++)
		putchar(af);
	putchar('\n');
	return (0);
}
