#include "main.h"
#include <stdio.h>
/**
* jack_bauer - print 24 hour
* Description: print out the 24 hour clock
* @a: holds the hour side
* @b: holds the hour side
* @c: holds the minute side
* @d: holds the minute side
* Return: always 0
*/
void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 0; a <= 2; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if ((a <= 1 && b <= 9) || (a <= 2 && b <= 3))
			{
				for (c = 0; c <= 5; c++)
				{
					for (d = 0; d <= 9; d++)
					{
						_putchar(a + '0');
						_putchar(b + '0');
						_putchar(58);
						_putchar(c + '0');
						_putchar(d + '0');
						_putchar('\n');
					}
				}
			}
		}
	}

}
