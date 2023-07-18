#include "dog.h"
#include <stdlib.h>

/**
* free_dog - frees dogs
* @d: gogs to be freed
* Return: 0
*/

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->owner);
	free(d->name);
	free(d);
}
