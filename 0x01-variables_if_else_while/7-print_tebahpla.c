#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	char cl = 'z';

	while (cl >= 'a')
	{
		putchar (cl);
		cl--;
	}

	putchar ('\n');

	return (0);
}
