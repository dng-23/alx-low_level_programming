#include "dog.h"
#include <stdlib.h>

void _strcpy(char *src, char *dest);

/**
 * new_dog - creates a new dog.
 * @name: value for the first member
 * @age: value for the second member
 * @owner: value for the third member
 * Return: created dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, j = 0;

	dog_t *d;

	if (name == NULL ||owner == NULL || age < 0)
		return (NULL);
	d = malloc(sizeof(dog_t));

	if (!d)
		return (NULL);
	while (name[i])
		i++;
	while (owner[j])
		j++;
	d->name = malloc(sizeof(char) * (i + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = malloc(sizeof(char) * (j + 1));
	if (d->owner == NULL)
	{
		free(d);
		return (NULL);
	}
	_strcpy(name, d->name);
	_strcpy(owner, d->owner);
	d->age = age;

	return (d);
}

/**
 * _strcpy - copies string from src to dest
 * @src: the src to be copied from
 * @dest: the dest to be copied to
 * Return: Nothing
 */
void _strcpy(char *src, char *dest)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}
