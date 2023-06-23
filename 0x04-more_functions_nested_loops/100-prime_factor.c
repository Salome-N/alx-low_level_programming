#include <stdio.h>
#include <math.h>

/**
* main -entry point
* Return: always 0
*/

int main(void)
{
	long n, maxp;
	long num = 612852475143;
	double sqr = sqrt(num);

	for (n = 1; n <= sqr; n++)
	{
		if (num % n == 0)
		{
			maxp = num / n;
		}
	}
	printf("%ld\n", maxp);
	return (0);
}
