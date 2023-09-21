#include <stdio.h>

void __attribute__((constructor)) race(void);

/**
* race - printed before main func is executed
*/

void race(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
