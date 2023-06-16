#include <stdio.h>
/**
* main - entry point
* Description: write possible single digits
* Return: always 0
*/
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar('0' + num);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
