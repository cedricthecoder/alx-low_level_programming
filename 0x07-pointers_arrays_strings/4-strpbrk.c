#include "main.h"
#include <stddef.h>

/**
* _strpbrk - Searches a string for any of a set of bytes.
* @s: The string to search.
* @accept: The string containing accepted characters.
* Return: A pointer to the first byte in s. NULL if not found.
*/
char *_strpbrk(char *s, char *accept)
{
	size_t j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
