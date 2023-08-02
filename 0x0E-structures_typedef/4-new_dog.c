#include "dog.h"
#include <stdio.h>

int strl(char *str);
char *strc(char *d, char *s);
dog_t *new_dog(char *name, float age, char *owner);

/**
* strl - length of string
* @str: string
* Return: length
*/

int strl(char *str)
{
	int l = 0;

	while (*str++)
		l++;

	return (l);
}

/**
* strc - copies from pointed source to destination
* @d: stores string copied
* @s: source string
* Return: pointer to d
*/

char *strc(char *d, char *s)
{
	int i = 0;

	for (i = 0; s[i]; i++)
		d[i] = s[i];

	d[i] = '\0';

	return (d);
}

/**
* new_dog - creates a new dog
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
* Return: 0
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);

	new->name = malloc(sizeof(char) * (strl(name) + 1));
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}

	new->owner = malloc(sizeof(char) * (strl(owner) + 1));
	if (new->owner == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}

	new->name = strc(new-name, name);
	new->age = age;
	new->owner = strc(new->owner, owner);

	return (new);
}
