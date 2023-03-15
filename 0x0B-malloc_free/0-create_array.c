#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,and init it with a specific char
 * @size: size of array
 * @c: the char to initiallize
 *
 * Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	size_t i;

	if (size == 0)
		return (NULL);
	ptr = malloc(sizeof(char) * size);
	if (!ptr)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
		ptr[i] = c;

	return (ptr);
}
