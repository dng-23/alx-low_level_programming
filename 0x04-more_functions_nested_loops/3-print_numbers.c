#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints the numbers, from 0-9
 * Return: 0
 */
void print_numbers(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		_putchar (n);
	}
	_putchar ('\n');
}
