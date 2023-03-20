#include "dog.h"
#include <stdio.h>

/**
 * print_dog -  prints a struct dog
 * @d: a variable to be printed
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d)
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
