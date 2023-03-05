#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * _atoi -  copies the string pointed to by src to dest
 * @s: pointer to string
 * Return: converted int or 0;
 */
int _atoi(char *s)
{
	int i = 0, digit = 0, sign = 1;

	while (s[i] == ' ')
		i++;
	if (s[i] == '-')
	{
		sign = -1;
		++i;
	}
	else if (s[i] == '+')
		 ++i;
	for (; s[i] >= '0' && s[i] <= '9'; ++i)
		digit = digit * 10 + (s[i] - '0');
	return (digit * sign);
}
