#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - allocate space in memory, which contains a copy of the give string
 * @str: string to be copied
 *
 * Return: pointer to the array, or NULL str is NULL
 */
char *_strdup(char *str)
{
	char *ptr;
	size_t i = 0;

	if (!str)
		return (NULL);
	ptr = malloc(sizeof(char) * strlen(str) + 1);
	while (i < strlen(str))
	{
		ptr[i] = str[i];
		i++;
	}

	return (ptr);
}
