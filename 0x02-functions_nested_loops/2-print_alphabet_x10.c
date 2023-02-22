#include "main.h"

/**
 * print_alphabet_x10 - prints 10x the alphabet in lowercase follow by new line
 *
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	char ch = 'a';
	int i = 0;

	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
