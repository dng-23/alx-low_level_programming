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
	while (*haystack != '\0')
	{
		if (*haystack == needle[0])
		{
			while (needle[i] != '\0')
			{
				if (*haystack != needle[i])
					break;
				i++;
				haystack++;
			}
			if (needle[i] == '\0')
				return (haystack - i);
			haystack -= i;
		}
		haystack++;
		i = 0;
	}
	return ("\0");
}
