#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: a string src to be added to
 * @src: a string to be appended
 * @n: bytes to be appended from src
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (n > 0 && src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
		n--;
	}
	return (dest);
}
