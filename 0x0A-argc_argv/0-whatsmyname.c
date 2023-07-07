#include "main.h"
#include <stdio.h>

/**
* main - print the name of file
* @argc: argument count
* @argv: argument vector
* Return: always 0
*/

int main(int argc, char *argv[])
{
	(void)argc;
	(void)argv;

	printf("%s\n", argv[0]);

	return (0);
}
