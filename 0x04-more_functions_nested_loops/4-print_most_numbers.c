#include "main.h"
#include <stdio.h>
/**
*print_most_numbers - makes sense
*Return: 0
*/
void print_most_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		if i != 2 && i != 4
			putchar(i + '0');
	}
	putchar('\n');
}
