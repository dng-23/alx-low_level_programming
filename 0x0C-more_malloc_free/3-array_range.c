#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: min num in the array
 * @max: max num in the array
 * Return: pointer to allocated memory of an array
 */
int *array_range(int min, int max)
{
	int *ptr, i;

	if (nmemb == 0)
		return (NULL);

	ptr = malloc(sizeof(int) * (min + max));
	if (!ptr)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
		ptr[i] = min;

	return (ptr);
}
