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
	int count = 0, k = 0, i, letter, j, l;
	char **ptr;

	if (*str == '\0' || str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		while (str[i] == ' ')
			i++;
		if (str[i] != '\0')
		{
			count++;
			while (str[i] && (str[i] != ' '))
				i++;
		}
	}
	ptr = malloc((count + 1) * sizeof(char *));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		while (str[i] == ' ')
			i++;
		if (str[i] != '\0')
		{
			l = i;
			while (str[i] && (str[i] != ' '))
				i++;
			letter = i - l;
			ptr[k] = malloc(sizeof(char) * (letter + 1));
			if (ptr[k] == NULL)
			{
				for (j = 0; j < i; j++)
					free(ptr[j]);
				free(ptr);
				return (NULL);
			}
			for (j = 0; j < letter; l++, j++)
				ptr[k][j] = str[l];
			ptr[k][letter] = '\0';
			k++;
			letter = 0;
		}
	}
	ptr[k] = NULL;
	return (ptr);
}
