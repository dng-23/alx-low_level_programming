#include "main.h"

/**
 * times_table - prints every minute of the day of Jack Bauer
 *
 * Return: nothing
 */
void times_table(void)
{
	int i = 0, j = 0, r;

	while (i < 10)
	{
		while (j < 10)
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
				if (j != 9)
				{
					_putchar(',');
				}
			}
			else
			{
				_putchar(' ');
				_putchar(r / 10 + '0');
				_putchar(r % 10 + '0');
				if (j != 9)
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
