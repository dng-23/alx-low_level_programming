#include "main.h"

/**
 * main - prints number of arguments passed
 * @argc: number of arguments passed
 * @argv: array of arguments passed
 * Return: Always 0.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	while (argc > 0)
	{
		_putchar(argc - 1 + '0');
		argc--;
	}
	_putchar('\n');
	return (0);
}
