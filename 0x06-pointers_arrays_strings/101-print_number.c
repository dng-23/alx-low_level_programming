#include "main.h"

/**
 * print_number -  prints an integer
 * @n: a number to print
 * Return: nothing
 */
void print_number(int n)
{
	int mul = 1;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	while (n / mul > 9)
		mul *= 10;
	while (mul > 0)
	{
		_putchar((n / mul) + '0');
		n %= mul;
		mul /= 10;
	}
}
