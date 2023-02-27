#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line
 * @str: pointer to string
 * Return: nothing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar (*str++);
	}
	_putchar ('\n');
}
