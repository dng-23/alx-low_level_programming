#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: a string that copies
 * @src: a string copied from
 * @n: bytes to be copied from src
 * Return: a pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (n > 0)
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	return (dest);
}
