#include "dog.h"

/**
* init_dog - initialize a variable of type struct dog
* @d: dog to be initialized
* @name: dog's name
* @age: dog's age
* @owner: dog's owner
* Return: zero
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
