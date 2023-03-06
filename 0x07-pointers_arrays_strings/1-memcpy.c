#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: memory area copied to
 * @src: memory area copied from
 * @n: number of bytes
 * Return: pointer to the memory area dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (src[i] != '\0' && i < n)
	{
		*dest = src[i];
		i++;
		dest++;
	}
	return (dest);
}
