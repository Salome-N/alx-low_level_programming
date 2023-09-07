#include "main.h"

/**
* string_nconcat - concatenates two strings
* @s1: string one
* @s2: string two
* @n: no. of bytes for s2 to concat to s1
* Return: ptr to memory with s1 and s2
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int l = n, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		l++;

	str = malloc(sizeof(char) * (l + 1));

	if (str == NULL)
		return (NULL);

	l = 0;

	for (i = 0; s1[i]; i++)
		str[l++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		str[l++] = s2[i];

	str[l] = '\0';

	return (str);
}
