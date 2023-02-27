#include "main.h"
#include <stdio.h>

/**
 * rev_string - a function that reverses a string
 * @s: pointer to string
 * Return: nothing
 */
void rev_string(char *s)
{
	char *temp, t;
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	temp = s--;
	while (len > 2)
	{
		len--;
		s--;
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
