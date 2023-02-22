#include "main.h"

/**
 * main - prints string followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	char *s = "_putchar";
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
