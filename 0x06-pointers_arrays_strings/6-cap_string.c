#include "main.h"
#include <stdio.h>
/**
 * cap_string - capitalizes all words of a string
 * @s: a string pointer
 * Return: string pointer
 */
char *cap_string(char *s)
{
	int i = 0, j = 0;
	char sep[13] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', ' '};

	sep[11] = '\t';
	sep[12] = '\n';

	while (s[i] != '\0')
	{
		while (sep[j])
		{
			if (s[i] == sep[j] && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
			{
				s[i + 1] -= 32;
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (s);
}
