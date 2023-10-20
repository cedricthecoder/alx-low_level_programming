#include "main.h"
/**
* cap_string - Capitalizes the first letter of each word in a string.
* @str: The string to capitalize.
* Return: A pointer to the modified string.
*/
char *cap_string(char *str)
{
	int i = 0;
	int capitalize = 1;

	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
	            str[i] == ',' || str[i] == ';' || str[i] == '.' ||
		    str[i] == '!' || str[i] == '?' || str[i] == '"' ||
		    str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			capitalize = 1;
		}
		else if (capitalize && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			capitalize = 0;
		}
		else
		{
			capitalize = 0;
		}
		i++;
	}
	return (str);
}
:wq

