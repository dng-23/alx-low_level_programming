#include "main.h"

/**
 * print_times_table - prints every minute of the day of Jack Bauer
 * @n: number of times table
 *
 * Return: nothing
 */
void print_times_table(int n)
{
	int i = 0, j = 0, r, k;

	if (n > 15 || n < 0)
		return;
	while (i <= n)
	{
		while (j <= n)
		{
			r = i * j;
			if (r < 10)
			{
				if (j != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(r % 10 + '0');
				if (j != n)
				{
					_putchar(',');
				}
			}
			else if (r >= 10 && r < 100)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(r / 10 + '0');
				_putchar(r % 10 + '0');
				if (j != n)
				{
					_putchar(',');
				}
			}
			else
			{
				k = r / 10;
				_putchar(' ');
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');
				_putchar(r % 10 + '0');
				if (j != n)
				{
					_putchar(',');
				}
			}

			j++;
		}
		_putchar('\n');
		i++;
		j = 0;
	}
}
