#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - prints the numbers, from 0-9 except 2 & 4
 * Return: 0
 */
void print_most_numbers(void)
{
	char n = '0';

	for (n; n <= '9'; n++)
	{
		if (n == '2' || n == '4')
			continue;
		_putchar (n);
	}
	_putchar ('\n');
}
