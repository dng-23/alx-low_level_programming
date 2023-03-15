#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * strtow - splits a string into words.
 * @str: string pointer
 * Return: pointer to an array of strings or NULL
 */
char **strtow(char *str)
{
	size_t count = 0, i = 0;
	int j = 0, k = 0, l;
	char **ptr;

	if (*str == '\0' || str == NULL || strlen(str) == 0)
		return (NULL);
	while (str[i] != '\0')
	{
		if ((str[i] == ' ' && (str[i + 1] != ' ')) || (i = 0 && str[i] != ' '))
		{
			count++;
		}
		i++;
	}
	ptr = malloc((count + 1) * sizeof(char *));
	count = 0;
	for (j = 0; str[j]; j++)
	{
		if (str[j] != ' ')
		{
			l = j;
			while (str[j] != ' ')
			{
				count++;
				j++;
			}
			j--;
			ptr[k] = malloc(sizeof(char) * (count + 1));
			for (i = 0; i < count; i++)
				ptr[k][i] = str[l++];
			ptr[k][i] = '\0';
			k++;
			count = 0;
		}
	}
	ptr[k] = NULL;

	return (ptr);
}
