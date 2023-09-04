#include "main.h"

/**
* _strdup - returns a pointer to a newly allocated space in memory,
* which contains a copy of the string given as a parameter
* @str: copy of the string
* Return:  pointer to a newly allocated space in memory
*/

char *_strdup(char *str)
{
	char *cp;
	int i, l = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		l++;

	cp = malloc(sizeof(char) * (l + 1));

	if (cp == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		cp[i] = str[i];

	cp[l] = '\0';

	return (cp);
}
