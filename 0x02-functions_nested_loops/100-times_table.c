#include "main.h"

/**
 * print_times_table - prints every minute of the day of Jack Bauer
 * @n: number of times table
 *
 * Return: nothing
 */
void print_times_table(int n)
{
	int i = 0, j = 0, r;

	if (n > 15 || n < 0)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			r = i * j;
			if (r < 10)
			{
				if (j != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(r % 10 + '0');
			}
			else if (r >= 10 && r < 100)
			{
				_putchar(' ');
				_putchar(r / 10 + '0');
				_putchar(r % 10 + '0');
			}
			else
			{
				_putchar(r / 100 + '0');
				_putchar(r / 10 % 10 + '0');
				_putchar(r % 10 + '0');
			}
			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
			}

		}
		_putchar('\n');
	}
}
