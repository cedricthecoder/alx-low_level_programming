#include "main.h"
#include <stdio.h>
/**
*print_diagonal - some other function
*@n: Some parameter
*Return: Void
*/
void print_diagonal(int n)
{
	if (n <= 0)
		putchar('\n');
	else
	{
		int i;

		for (i = 0; i < n; i++)
		{
			putchar('\\');
			putchar('\n');
		}
	}
}
