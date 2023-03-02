#include "main.h"

/**
 * _strcmp - function that copies a string
 * @s1: a string to be compared
 * @s2: a string to be compared
 * Return: lessthan greaterthan or equal to zero
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, val;

	while ((s1[i] == s2[i]) && s1[i] != '\0')
	{
		i++;
	}
	val = s1[i] - s2[i];
	return (val);
}
