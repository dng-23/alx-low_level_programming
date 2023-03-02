#include "main.h"
#include <stdio.h>
/**
 * rot13 - encodes a string using rot13
 * @s: a string to be encoded
 * Return: the encoded string
 */
char *rot13(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		while (((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))\
				&& s[i] != '\0')
		{
			if ((s[i] >= 'a' && s[i] < 'n') || s[i] < 'N')
			{
				s[i] += 13;
			}
			else
				s[i] -= 13;
			i++;
		}
		i++;
	}
	return (s);
}
