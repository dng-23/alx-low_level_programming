#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * alloc_grid - creates a two dimensional array
 * @width: width of array
 * @height: height of array
 * Return: pointer to the allocated array, or NULL
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;

	ptr = malloc(sizeof(int *) * height);

	if (width < 1 || height < 1)
		return (NULL);


	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int *) * width);
		if (p[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(p[i]);
			free(p);
			return (NULL);
		}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	}

	return (ptr);
}
