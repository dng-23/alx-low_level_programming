#include "main.h"

/**
 * _isalpha - checks for alphabetic chararacter
 * @c: The character to check
 *
 * Return: 1 if lowercsae or Uppercase letter else 0
 */
int _isalpha(int c)
{
	char ch = 'a';
	char cH = 'A';
	int r, R;

	c = c + '0';

	while (ch <=  'z' && cH <= 'Z')
	{
		r = ch + '0';
		R = cH + '0';
		if (r == c || R == c)
		{
			return (1);
		}
		ch++;
		cH++;
	}
	return (0);
}
