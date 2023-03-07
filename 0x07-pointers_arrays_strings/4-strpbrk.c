#include "main.h"

/**
 * _strpbrk- searches a string for any of a set of bytes.
 * @s: string pointer
 * @accept: string pointer
 * Return: ptr to the byte in s that matches one of the bytes in accept or null
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
