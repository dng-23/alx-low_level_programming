#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>

void print_c(va_list);
void print_s(va_list);
void print_i(va_list);
void print_f(va_list);

/**
 * print_c - print char
 * @ap: argument list
 * Return: Nothing
 */
void print_c(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_i - print integer
 * @ap: argument list
 * Return: Nothing
 */
void print_i(va_list ap)
{
	printf("%i", va_arg(ap, int));
}

/**
 * print_s - print string
 * @ap: argument list
 * Return: Nothing
 */
void print_s(va_list ap)
{
	char *s = va_arg(ap, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_f - print float
 * @ap: argument list
 * Return: Nothing
 */
void print_f(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0, j;
	char *spec = "cisf", *comma = "";
	void (*ptr[])(va_list) = {print_c, print_i, print_s, print_f};
	va_list ap;

	va_start(ap, format);

	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (spec[j] == format[i])
			{
				printf("%s", comma);
				ptr[j](ap);
				comma = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");

	va_end(ap);
}
