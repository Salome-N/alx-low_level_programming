#include "main.h"

/**
* _strdup - copy str to a sized array
* @str: srting
* Return: return the text
*/

char *_strdup(char *str)
{
	char *txt;
	int n = 0, p;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[n] != '\0')
	{
		n++;
	}
	txt = malloc(sizeof(char) * (n + 1));

	if (txt == NULL)
	{
		return (NULL);
	}
	for (p = 0; str[p]; p++)
	{
		txt[p] = str[p]
	}

	return (txt);
}
