#include "main.h"

/**
 * _strstr- locates a substring
 * @haystack: string pointer
 * @needle: string pointer
 * Return: a pointer to the beginning of the located substring, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	if (*needle == 0)
		return (haystack);
	while (needle[i])
	{
		while (*haystack)
		{
			if (haystack[i] == needle[i])
				return (haystack);
			haystack++;
		}
		i++;
	}
	return ("\0");
}
