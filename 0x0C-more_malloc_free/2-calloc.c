#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: array size
 * @size: size
 * Return: pointer to allocated memory of an array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);
	if (!ptr)
		return (NULL);
	for (i = 0; i < (size * nmemb); i++)
		ptr[i] = 0;

	return (ptr);
}
