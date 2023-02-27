#include "main.h"

/**
 * _strcpy -  copies the string pointed to by src to dest
 * @dest: string to be copied to
 * @src: string copied from
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = *src;
	return (dest);
}
