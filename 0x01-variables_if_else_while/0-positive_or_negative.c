#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - entry point
* @n - random number generated
* Return: always returns zero
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/**
	* Description: Print out the value
	* of n if it's Positive or Negative or Zero
	*/
	if (n > 0)
		printf("%d is positive\n", n);
	else
		if (n < 0)
			printf("%d is negative\n", n);
		else
			printf("%d is zero\n", n);
	return (0);
}
