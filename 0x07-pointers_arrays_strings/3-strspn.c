#include "main.h"

/**
 * _strspn- gets the length of a prefix substring
 * @s: string pointer
 * @accept: string pointer
 * Return: num of byte in init segment of s w/c consist only of byte in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
				count++;
			accept++;
		}
		s++;
	}
	return (count);
}
