#include <stdio.h>

/*
* main - entry point
* Return: always 0
*/

int main(void)
{
	int n;

	for (n = 0; n <= 100; n++)
	{
		if ((n % 15) == 0 && n != 0)
		{
			printf("FizzBuzz");
		}
		else if ((n % 3) == 0 && n != 0)
		{
			printf("Fizz");
		}
		else if ((n % 5) == 0 && n != 0)
		{
			printf("Buzz");
		}
		else
			printf("%d ", n);

		printf(" ");
	}

	printf("\n");
	
	return (0);
}
