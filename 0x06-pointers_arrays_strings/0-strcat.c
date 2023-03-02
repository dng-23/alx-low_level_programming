#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: a string src to be added to
 * @src: a string to be appended
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = src[j];
	return (dest);
}
