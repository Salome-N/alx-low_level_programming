#include "main.h"

int c_words(char *s);
int wordl(char *s);
char **strtow(char *str);

/**
* c_words - counts no. of words cointained in a string
* @s: string
* Return: word count
*/

int c_words(char *s)
{
	int i = 0, w = 0, l = 0;

	for (i = 0; *(s + i); i++)
		l++;

	for (i = 0; i < l; i++)
	{
		if (*(s + i) != ' ')
		{
			w++;
			i += wordl(s + i);
		}
	}

	return (w);
}

/**
* wordl - locates the index at the end of the first word
* @s: string
* Return: zero
*/

int wordl(char *s)
{
	int i = 0, l = 0;

	while (*(s + i) && *(s + i) != ' ')
	{
		l++;
		i++;
	}

	return (l);
}

/**
* strtow - function that splits a string into words
* @str: string
* Return: zero
*/

char **strtow(char *str)
{
	char **s;
	int i = 0, wd, a, lr, b;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	wd = c_words(str);
	if (wd == 0)
		return (NULL);

	s = malloc(sizeof(char *) * (wd + 1));

	if (s == NULL)
		return (NULL);

	for (a = 0; a < wd; a++)
	{
		while (str[i] == ' ')
			i++;

		lr = wordl(str + i);

		s[a] = malloc(sizeof(char) * (lr + 1));

		if (s[a] == NULL)
		{
			for (; a >= 0; a--)
				free(s[a]);

			free(s);
			return (NULL);
		}

		for (b = 0; b < lr; b++)
			s[a][b] = str[i++];

		s[a][b] = '\0';
	}

	s[a] = NULL;

	return (s);
}
