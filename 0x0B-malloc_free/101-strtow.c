#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * strtow - splits a string into words.
 * @str: string pointer
 * Return: pointer to an array of strings or NULL
 */
char **strtow(char *str)
{
	size_t count = 0, i = 0, letter = 0;
	int j = 0, k = 0, l;
	char **ptr;

	if (*str == '\0' || str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		if (str[i] == ' ' && (str[i + 1] != ' '))
			count++;
	if (count == 0)
		return (NULL);
	if (str[0] != ' ')
		count++;
	ptr = malloc((count + 1) * sizeof(char *));
	if (ptr == NULL)
		return (NULL);
	for (j = 0; str[j]; j++)
	{
		if (str[j] != ' ')
		{
			l = j;
			for (; str[j] != ' '; j++)
				letter++;
			ptr[k] = malloc(sizeof(char) * (letter + 1));
			if (ptr[k] == NULL)
			{
				for (; k >= 0; k--)
					free(ptr[k]);
				free(ptr);
				return (NULL);
			}
			for (i = 0; i < letter; i++)
				ptr[k][i] = str[l++];
			ptr[k][i] = '\0';
			k++;
			letter = 0;
		}
	}
	ptr[k] = NULL;
	return (ptr);
}
