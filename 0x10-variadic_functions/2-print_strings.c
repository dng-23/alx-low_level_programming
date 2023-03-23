#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of strings passed to the function
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *s;
	va_list ap;

	va_start(ap, n);

	while (i < n)
	{
		s = va_arg(ap, char *);
		if (s == NULL)
			s = "nil";
		printf("%s", s);
		if (separator && i != n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");

	va_end(ap);
}
