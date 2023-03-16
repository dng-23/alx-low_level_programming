#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: min num in the array
 * @max: max num in the array
 * Return: pointer to allocated memory of an array or NULL
 */
int *array_range(int min, int max)
{
	int *ptr, i, size;

	if (min > max)
		return (NULL);
	size = max - min;
	ptr = malloc(sizeof(int) * (size + 1));
	if (!ptr)
		return (NULL);
	for (i = 0; i <= size; i++)
		ptr[i] = min++;

	return (ptr);
}
