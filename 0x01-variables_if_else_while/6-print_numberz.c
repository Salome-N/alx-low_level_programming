#include <stdio.h>
/**
* main - entry point
* @num - holds the number to be printed
* Description: print numbers from 0 to 9 using putchar
* Return: always 0
*/
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		putchar('0' + num);
	putchar('\n');
	return (0);
}
