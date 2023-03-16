#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: string
 * @s2: string
 * @n: bytes of s2 to be concatnate to s1
 * Return: pointer to allocated memory of the new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_string;
	unsigned int len, i, j;
	
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len = strlen(s2);
	if (strlen(s2) > n)
		len = n;

	new_string = malloc(sizeof(char) * strlen(s1) + len + 1);
	if (!new_string)
		return (NULL);
	for (i = 0; s1[i]; i++)
		new_string[i] = s1[i];
	for (j = 0; j < len; j++, i++)
		new_string[i] = s2[j];
	new_string[i] = '\0';

	return (new_string);
}
