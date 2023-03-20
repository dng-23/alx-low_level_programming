#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: a variable to be initialized
 * @name: value for the first member
 * @age: value for the second member
 * @owner: value for the third member
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
