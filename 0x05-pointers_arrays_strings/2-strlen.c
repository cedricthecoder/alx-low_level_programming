#include "main.h"
/**
* _strlen - returns the strings
* @s: string to be used
* Return: Length
*/
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
