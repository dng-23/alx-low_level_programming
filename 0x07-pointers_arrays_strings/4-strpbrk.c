#include "main.h"

/**
 * _strpbrk- searches a string for any of a set of bytes.
 * @s: string pointer
 * @accept: string pointer
 * Return: ptr to the byte in s that matches one of the bytes in accept or null
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
				return (s);
			accept++;
		}
		s++;
	}
	return ('\0');
}
