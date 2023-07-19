#include "function_pointers.h"

/**
* print_name - print name
* @name: name
* @f: pointer
* Return: 0 since void
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return (NULL);
	f(name);
}
