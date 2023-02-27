#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: pointer to string
 * Return: nothing
 */
void puts_half(char *str)
{
	int len = 0, half;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	if (len % 2 == 0)
		half = len / 2;
	else
		half = (len - 1) / 2;
	while (half < len)
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
