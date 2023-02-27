#include "main.h"
#include <stdio.h>
/**
 * _atoi -  copies the string pointed to by src to dest
 * @s: pointer to string
 * Return: converted int or 0;
 */
int _atoi(char *s)
{
	char *temp = s;
	int i = 0, digit = 0;
	while ((*temp < '0' || *temp > '9') || *temp != '\0')
	{
		i++;
		temp++;
	}
	temp = s;
	while (*temp != '\0')
	{
		if (*temp >= '0' && *temp <= '9')
		{
		}
	}
		printf("hhh %s\n",s);
		/*if (i > 0)
		{
			i--;
			digit = (s[i] + '0') - 48;
			digit = num * digit;
			while (i)
			{
				i--;
				num *= 10;
				digit = (s[i] + '0') - 48;
				digit += (num * digit);
			}

		}
	}*/
}
	return (digit);
}
