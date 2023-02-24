#include "main.h"

/**
 * _isupper - checks for upper case char
 * @c: char to be checked
 * Return: 1 if c is uppercase else 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
