#include "function_pointers.h"

/**
 * array_iterator - executes a func given as a param on each elem of an array
 * @array: array
 * @size: size of array
 * @action: pointer to function
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || action == NULL)
		return;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
