#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	char cl = 'a', cu = 'A';

	while (cl <= 'z')
	{
		putchar (cl);
		cl++;
	}

	while (cu <= 'Z')
	{
		putchar (cu);
		cu++;
	}

	putchar ('\n');

	return (0);
}
