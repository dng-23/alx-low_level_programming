#include "main.h"
#include <stdio.h>
/**
 * print_number -  prints an integer
 * @n: number to print
 * Return: nothing
 */
void print_number(int n)
{
	int count = n, mul = 1;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n >= 0 && n <= 9)
		_putchar(n + '0');
	else
	{
		while (count != 0)
		{
			count = count / 10;
			mul *= 10;
		}
		mul /= 10;
		while (mul != 1)
		{
			_putchar((n / mul) % 10 + '0');
			mul /= 10;
		}
		_putchar(n % 10 + '0');
	}
}
