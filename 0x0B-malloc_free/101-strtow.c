#include "main.h"
#include <stdlib.h>

/**
 * strtow - splits a string into words.
 * @str: string pointer
 * Return: pointer to an array of strings or NULL
 */

char **strtow(char *str)
{
	int count = 0, i = 0, length, j;
	char *p = str, *word, **ptr;

	if (str == NULL || *str == '\0')
		return (NULL);
	while (*p != '\0')
	{
		while (*p == ' ')
			p++;
		if (*p != '\0')
		{
			count++;
			while (*p != '\0' && *p != ' ')
				p++;
		}
	}
	ptr = malloc((count + 1) * sizeof(char *));
	if (ptr == NULL)
		return (NULL);
	for (p = str; *p != '\0'; i++)
	{
		while (*p == ' ')
			p++;
		if (*p != '\0')
		{
			word = p;
			while (*p != '\0' && *p != ' ')
				p++;
			length = p - word;
			ptr[i] = malloc((length + 1) * sizeof(char));
			if (ptr[i] == NULL)
			{
				for (j = 0; j < i; j++)
					free(ptr[j]);
				free(ptr);
				return (NULL);
			}
			for (j = 0; j < length; j++)
				ptr[i][j] = word[j];
			ptr[i][length] = '\0';
		}
	}
	ptr[count] = NULL;
	return (ptr);
}

