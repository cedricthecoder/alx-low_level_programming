#include "main.h"

/**
* leet - Encodes a string into "1337" using specific character replacements.
* @str: The string to encode.
* Return: A pointer to the modified string.
*/
char *leet(char *str)
{
	char *letters = "aeotlAEOTL";
	char *replacements = "430701";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = replacements[j / 2];
				break;
			}
		}
	}
	return (str);
}
