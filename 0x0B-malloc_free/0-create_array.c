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

	if (size == 0)
		return (NULL);
	ptr = malloc(sizeof(char) * size);
	*ptr = c;

	return (ptr);
}
