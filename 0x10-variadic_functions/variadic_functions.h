#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS

#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct print_format - Struct print_format
 *
 * @spec: The specifier
 * @f: The function associated
 */
typedef struct print_format
{
	char spec;
	void (*f)(va_list);
} pr_f;

#endif
