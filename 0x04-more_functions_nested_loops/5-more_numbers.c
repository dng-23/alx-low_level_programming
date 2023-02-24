#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints the numbers, 0-14 10 times
 * Return: 0
 */
void more_numbers(void)
{
	int n, i;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				_putchar (n / 10 + '0');
			}
			_putchar (n % 10 + '0');
		}
		_putchar ('\n');
	}
}
