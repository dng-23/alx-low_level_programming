#include "main.h"

/**
 * _strchr: locates a character in a string
 * @s: string
 * @c: char to lo be located
 * Return: a pointer to the first occurrence of the character c or NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return ('\0');
}
