#include <stdio.h>
#include <ctype.h>
/**
* main - entry point
* @AtoZ - alphabet starting point 'A'
* Description: print out the alphabet in lowercase from A-Z
* Return: always return 0
*/
int main(void)
{
	for (int AtoZ = 'A'; AtoZ <= 'Z'; AtoZ++)
	{
		putchar(tolower(AtoZ));
	}
	putchar('\n');
		return (0);
}
