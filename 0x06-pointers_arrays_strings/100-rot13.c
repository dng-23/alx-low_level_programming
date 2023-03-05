#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: a string to be encoded
 * Return: the encoded string
 */
char *rot13(char *s)
{
	int i = 0, j;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char key[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == alpha[j])
			{
				s[i] = key[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
