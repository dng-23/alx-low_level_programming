#include "dog.h"
#include <stdio.h>

/**
 * print_dog -  prints a struct dog
 * @d: a variable to be printed
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (!d)
		return;
	if (d->name == null)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (d->age < 0)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);
	if (d->owner == null)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
