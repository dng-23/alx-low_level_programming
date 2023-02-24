#include "main.h"

/**
 * print_triangle - print triangle in the terminal
 * @size: size of triangle
 * Return: 0
 */
void print_triangle(int size)
{
	int i, j, z;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = i; j < size - 1; j++)
				_putchar (' ');
			for (z = 0; z < i + 1; z++)
				_putchar ('#');
			_putchar ('\n');
		}
	}
	else
		_putchar ('\n');
}
