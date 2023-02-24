#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks for digit 0-9
 * @c: digit to be checked
 * Return: 1 if c is digit else 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
