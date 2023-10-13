#include "main.h"
#include <stdio.h>
/**
*more_numbers - Some random function
*Return: 0
*/
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			putchar(j + '0');
		}
		putchar('\n');
	}
	putchar('\n');
}
