#include "main.h"

/**
 * _islower - checks for lowercase chararacter
 * @c: The character to check
 *
 * Return: 1 if lowercsae else 0
 */
int _islower(int c)
{
	char ch = 'a';
	int r;

	c = c + '0';

	while (ch <=  'z')
	{
		r = ch + '0';
		if (r == c)
		{
			return (1);
		}
		ch++;
	}
	return (0);
}
