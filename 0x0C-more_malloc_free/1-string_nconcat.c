#include "main.h"

/**
* string_nconcat - concatenates two strings
* @s1: string 1
* @s2: string 2
* @n: variable
* Return: return concatenated string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s12;
	unsigned int p1, p2;

	p1 = 0, p2 = 0;

	while (s1[p1] != '\0')
		p1++;
	while (s2[p2] != '\0')
		p2++;

	if (n > p2)
		s12 = malloc(sizeof(char) * (p1 + n + 1));
	else
		s12 = malloc(sizeof(char) * (p1 + p2 + 1));

	if (s12 == NULL)
		return (NULL);

	p1 = 0, p2 = 0;

	while (s1[p1] != '\0')
		s12[p1] = s1[p1];
		p1++;
	while (s2[p2] != '\0')
		s12[p1] = s2[p2];
		p1++, p2++;
	s12[p1] = '\0';

	return (s12);
}
