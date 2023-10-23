#include "main.h"
#include <stddef.h>

/**
* _strstr - Locates a substring in a string.
* @haystack: The string to search.
* @needle: The substring to locate.
* Return: A pointer beginning the located substring. NULL if not found.
*/
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack)
	{
		h = haystack;
		n = needle;
		while (*n && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
