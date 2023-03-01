#include "main.h"
#include <stdio.h>

/**
 * rev_string - a function that reverses a string
 * @s: pointer to string
 * Return: nothing
 */
void rev_string(char *s)
{
	char *temp = s, t;
	int len = 0, i = 0;

	while (s[i])
	{
		len++;
		i++;
	}
	while (len > 1)
	{
		len--;
		temp++;
	}
	while (temp != s)
	{
		t = *s;
		*s = *temp;
		*temp = t;
		s++;
		temp--;
	}
}
