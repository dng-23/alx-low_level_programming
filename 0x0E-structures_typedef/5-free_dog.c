#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory allocated to dogs
 * @d: variable to be freed
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
