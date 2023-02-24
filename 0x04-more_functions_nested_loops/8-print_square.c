#include "main.h"
#include <stdio.h>

/**
 * print_square - print square in the terminal
 * @size: size of square
 * Return: 0
 */
void print_square(int size)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				_putchar ('#');
				_putchar ('\n');
			}
		}
	}
	else
		_putchar ('\n');
}
