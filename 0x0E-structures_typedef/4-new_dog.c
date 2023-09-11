#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner);
int strl(char *s);
char *strc(char *d, char *s);

/**
* strl - calc string length
* @s: string
* Return: string length
*/

int strl(char *s)
{
	int l = 0;

	while (*s++)
		l++;

	return (l);
}

/**
* strc - copy string from source to destination
* @d: destination of string
* @s: source string
* Return: ptr to d
*/

char *strc(char *d, char *s)
{
	int i = 0

	for (i = 0; s[i]; i++)
		d[i] = s[i]

	d[i] = '\0';

	return (d);
}

/**
* new_dog - creates new dog
* @name: dog's name
* @age: dog's age
* @owner: dog's owner
* Return: zero
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t d;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = malloc(sizeof(char) * (strl(name) + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = malloc(sizeof(char) * (strl(owner) + 1));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	d->name = strc(d->name, name);
	d->age = age;
	d->owner = strc(d->owner, owner);

	return (d);

}
