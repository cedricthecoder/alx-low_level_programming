#include "main.h"
/**
* print_reversed - prints a string in reverse
* @str: string
* return: 0
*/
void print_reversed(char *str)
{
	int length = 0;
	int index;

	while (*str != '\0')
	{
		length++;
		str++;
	}
	str--;
	for (index = length; index > 0; index--)
	{
		_putchar(*str);
		str--;
	}
	_putchar('\n');
}
