#include <stdio.h>
#include <ctype.h>
/**
* main - entry point
* @AtoZ - alphabet starting point 'A'
* Description: print out the alphabet in
* lowercase then uppercase from A-Z
* Return: always return 0
*/
int main(void)
{
	int AtoZ;

	for (AtoZ = 'A'; AtoZ <= 'Z'; AtoZ++)
	{
		putchar(tolower(AtoZ));
	}
	for (AtoZ = 'A'; AtoZ <= 'Z'; AtoZ++)
	{
		putchar(AtoZ);
	}
	putchar('\n');
	return (0);
}
