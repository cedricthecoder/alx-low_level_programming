#include "main.h"

/**
* _strspn - Gets the length of a prefix substring.
* @s: The string to search.
* @accept: The string containing accepted characters.
* Return: The number of bytes in initial segment has stuff from accept.
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found;

	while (*s)
	{
		int i;

		found = 0;
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				found = 1;
				break;
			}
		}
		if (!found)
		{
			return (count);
		}
		count++;
		s++;
	}
	return (count);
}
