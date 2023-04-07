#include "main.h"
#include <string.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string of 0 and 1 chars
 * Return: converted value or 0 if fails.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len, converted = 0, i = 0;

	if (!b)
		return (0);
	len = strlen(b);
	while (i < len)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		converted += (b[i] - 48) << (len - 1 - i);
		i++;
	}
	return (converted);
}
