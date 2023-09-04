#include <stdio.h>

/**
* main - prints all arguments it receives
* @argc: no. of arguments
* @argv: array of ptr to arguments
* Return: zero
*/

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
		printf("%s\n", argv[a]);

	return (0);
}
