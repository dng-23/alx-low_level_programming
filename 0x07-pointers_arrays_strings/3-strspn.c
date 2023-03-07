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
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				count++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (count);
		}
		s++;
	}
	return (count);
}
