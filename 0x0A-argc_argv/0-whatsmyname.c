#include <stdio.h>

/**
* main - Write a program that prints its name, followed by a new line
* @argc: number of arguments
* @argv: array of ptr to arguments
* Return: zero
*/

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
