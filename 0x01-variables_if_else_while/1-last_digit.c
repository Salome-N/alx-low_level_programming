#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
* main - entry point
* @n - randomly generated number
* Return: always return zero
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/**
	* Description: print out the last digit if n
	* and compare if it is greater than 5/equal to 0/less than 6 and not 0
	* @l - holds the last digit of n
	*/
	int l;

	l = n % 10;

	if (l == 0)
		printf("Last digit of %d is %d and is 0\n", n, l);
	else
		if (l > 5)
			printf("Last digit of %d is %d and is greater than 5\n", n, l);
		else
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
	return (0);
}
