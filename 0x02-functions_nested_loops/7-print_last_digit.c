#include "main.h"

/**
 * print_last_digit - compute absolute value
 * @n: number to compute
 *
 * Return: last digit of a number
 */
int print_last_digit(int n)
{
	int l = n % 10;

	if (l < 0)
		l *= -1;
	_putchar(l + '0');
	return (l);
}
