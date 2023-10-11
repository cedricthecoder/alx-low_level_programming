#include "main.h"
#include <stdio.h>
/**
 *times_table - function that does the time table
 *Return: result
 */
void times_table(void)
{
	int i, j, result;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			result = i * j;
			printf("%d", result);
			printf(",  ");
		}
	printf("\n");
	}
}
