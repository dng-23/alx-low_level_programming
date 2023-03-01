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
	i = len;
	while (len > 1)
	{
		len--;
		temp++;
	}
	len--;
	while (len < i + 1 / 2)
	{
		t = *s;
		*s = *temp;
		*temp = t;
		len++;
		i--;
	}
}
