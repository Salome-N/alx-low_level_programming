#include "main.h"

/**
* create_array - create array if size size and store c
* @size: size of array
* @c: string
* Return: return the text
*/

char *create_array(unsigned int size, char c)
{
	char *txt;
	unsigned int n;

	txt = malloc(sizeof(char) * size);
	if (size == 0 || txt == NULL)
	{
		return (NULL);
	}

	for (n = 0; n < size; n++)
	{
		txt[n] = c;
	}
	return (txt);
}
