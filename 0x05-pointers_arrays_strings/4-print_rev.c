#include "main.h"

/**
 * print_rev - function that prints a string in reverse, followed by a new line
 * @s: pointer to string
 * Return: nothing
 */
void print_rev(char *s)
{
	while (*s != '\0')
	{
		s++;
	}
	s--;
	while (*s)
	{
		_putchar (*s--);
	}
	_putchar ('\n');
}
