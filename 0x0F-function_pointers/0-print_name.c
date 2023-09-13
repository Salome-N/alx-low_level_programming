#include "function_pointers.h"

/**
* print_name - Prints a name
* @name: name
* @f: ptr to a func that prints the name
* Return: name
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
