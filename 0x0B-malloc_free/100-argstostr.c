#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - that concatenates all the arguments of a program
 * @ac: argument count
 * @av: array of the agrgument
 * Return: a pointer to the result string or NULL
 */
char *argstostr(int ac, char **av)
{
	size_t count = 0, k = 0;
	int i, j;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		count += strlen(av[i]);
	}
	ptr = malloc((sizeof(char) * (count + 1)) + ac);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ptr[k] = av[i][j];
			k++;
		}
		ptr[k] = '\n';
		k++;
	}
	return (ptr);
}
