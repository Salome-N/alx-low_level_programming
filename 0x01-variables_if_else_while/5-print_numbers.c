#include <stdio.h>
/**
* main - entry point
* @num - holds the number
* Description: print numbers from 0 to 10
* Return: always 0
*/
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		printf("%d", num);
	printf("\n");
	return (0);
}
