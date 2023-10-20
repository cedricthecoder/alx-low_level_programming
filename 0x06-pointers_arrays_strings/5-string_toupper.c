#include "main.h"
/**
 * string_toupper - Changes all lowercase letters in a string to uppercase.
 * @str: The string to convert.
 * Return: A pointer to the modified string.
 */
char *string_toupper(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return str;
}
