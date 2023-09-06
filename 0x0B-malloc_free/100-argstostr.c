#include "main.h"

/**
* argstostr - concatenates all the arguments of your program
* @ac: arg count
* @av: arry of ptr to arg
* Return: concatenated arguments
*/

char *argstostr(int ac, char **av)
{
	char *wd;
	int a, p, i = 0, s = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (p = 0; av[a][p]; p++)
			s++;
	}

	wd = malloc(sizeof(char) * s + 1);

	if (wd == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (p = 0; av[a][p]; p++)
		{
			wd[i++] = av[a][p];
		}

		wd[i++] = '\n';
	}

	wd[s] = '\0';

	return (wd);
}
