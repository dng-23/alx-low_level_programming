#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array
 * @size: size of array
 * @cmp: pointer to function to be used to compare values
 * Return: index of the first element for the cmp fun does not return 0 or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0, res;

	if (size < 1 || cmp == NULL)
		return (-1);

	while (i < size)
	{
		res = cmp(array[i]);
		if (res != 0)
			return (i);
		i++;
	}
	return (-1);
}
