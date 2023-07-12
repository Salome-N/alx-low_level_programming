#include "main.h"

/**
* str_concat - concatenates two strings together
* @s1: string 1
* @s2: string 2
* Return: always 0
*/

char *str_concat(char *s1, char *s2)
{
	char *s12;
	int p1 = 0, p2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[p1] != '\0')
		p1++;
	while (s2[p2] != '\0')
		p2++;

	s12 = malloc(sizeof(char) * (p1 + p2 + 1));

	p1 = 0;
	p2 = 0;

	if (s12 == NULL)
		return (NULL);
	while (s1[p1] != '\0')
	{
		s12[p1] = s1[p1];
		p1++;
	}
	while (s2[p2] != '\0')
	{
		s12[p1] = s2[p2];
		p1++, p2++;
	}
	s12[p1] = '\0';

	return (s12);
}
