#include <stdio.h>
#include <ctype.h>
/**
* main - entry point
* @AtoZ - holds the letters
* Description: prints alphabet except e and q
* Return: always 0
*/
int main(void)
{
	int AtoZ;

	for (AtoZ = 'A'; AtoZ <= 'Z'; AtoZ++)
		if (AtoZ != 'E' && AtoZ != 'Q')
			putchar(tolower(AtoZ));
	putchar('\n');
	return (0);
}
