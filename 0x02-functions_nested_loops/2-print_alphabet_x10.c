#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - prints alphabets in lower cases 10x
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
			putchar(j);
		putchar('\n');
	}
	
}
