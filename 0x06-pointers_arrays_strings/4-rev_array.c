#include "main.h"
/**
* print_rev - prints a string in reverse
* @s: string
* return: 0
*/
void print_rev(char *s)
{
	int length = 0;
	int index;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	for (index = length; index > 0; index--)
	{
		_putchar(*str);
		s--;
	}
	_putchar('\n');
}
