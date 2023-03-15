#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string to be concatenate to s1
 * Return: pointer to the allocated space, or NULL if str is NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	size_t i = 0;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	ptr = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	while (*s2 != '\0')
	{
		ptr[i] = *s2;
		i++;
		s2++;
	}
	ptr[i] = '\0';


	return (ptr);
}
