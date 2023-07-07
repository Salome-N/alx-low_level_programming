#include "main.h"

/**
* main - calculate the sum of arguments
* @argc: argument count
* @argv: argument vector
* Return: always 0
*/

int main(int argc, char *argv[])
{
	int  c;
	unsigned int sum, b;
	char *n;

	sum = 0;
	c = 1;

	while (c < argc)
	{
		n = argv[c];

		for (b = 0; b < strlen(n); b++)
		{
			if (n[b] < 48 || n[b] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}

		sum = sum + atoi(n);
		c++;
	}

	printf("%d\n", sum);

	return (0);
}
