#include <stdio.h>

/**
* main - prints no. of arguments passed
* @argc: no. of arguments
* @argv: aray of ptr to the arguments
* Return: zero
*/

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
