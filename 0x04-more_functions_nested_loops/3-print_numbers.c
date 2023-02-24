#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints the numbers, from 0-9
 * Return: 0
 */
void print_numbers(void)
{
	char n = '0';

	for (n; n <= '9'; n++)
	{
		_putchar (n);
	}
	_putchar ('\n');
}
