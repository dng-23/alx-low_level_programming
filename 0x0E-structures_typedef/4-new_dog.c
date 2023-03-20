#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: value for the first member
 * @age: value for the second member
 * @owner: value for the third member
 * Return: created dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));

	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}
