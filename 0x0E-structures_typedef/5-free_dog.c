#include "dog.h"

/**
* free_dog - frees dogs
* @d: dog to be freed
* Return: zero
*/

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
