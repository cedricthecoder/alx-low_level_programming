#include "main.h"
/**
* _puts - funcst
* @str: string
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	putchar('\n');
}
