#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: a string to be encoded
 * Return: the encoded string
 */
char *rot13(char *s)
{
	int i = 0, j = 0;
	char first[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char second[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[i] != '\0')
	{
		while (first[j] != '\0')
		{
			if (s[i] == first[j])
			{
				s[i] = second[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
