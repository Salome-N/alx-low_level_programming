#include <stdio.h>
#include <ctype.h>
/**
* main - entry point
* @ZtoA - holds the letters
* Description: print the alphabet from z to a in lowercase
* Return: always 0
*/
int main(void)
{
	char ZtoA;

	for (ZtoA = 'Z'; ZtoA >= 'A'; ZtoA--)
		putchar(tolower(ZtoA));
	putchar('\n');
	return (0);

}
