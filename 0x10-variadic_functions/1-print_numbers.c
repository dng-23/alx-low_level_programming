#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;

	va_start(ap, n);

	while (i < n)
	{
		printf("%d", va_arg(ap, int));
		if (separator && i != n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");

	va_end(ap);
}
