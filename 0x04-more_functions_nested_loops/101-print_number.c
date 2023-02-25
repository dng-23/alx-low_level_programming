#include "main.h"
#include <stdio.h>

/**
 * print_number - prints an integer
 * @n: integer to be printed
 * Return: Always 0.
 */
void print_number(int n)
{
	int p = n, count = 0, m_10 = 1;

	if (n < 0)
	{
		p *= -1;
		n *= -1;
		_putchar('-');
	}
	while (p > 0)
	{
		p = p / 10;
		count++;
	}
	count--;
	while (count > 0)
	{
		m_10 *= 10;
		count--;
	}
	if (m_10 == 10)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (m_10 >= 100)
	{
		_putchar(n / m_10 + '0');
		m_10 /= 10;
		while (m_10 > 1)
		{
			_putchar((n / m_10) % 10 + '0');
			m_10 /= 10;
		}
		_putchar(n % 10 + '0');
	}
	else
		 _putchar(n % 10 + '0');
}
