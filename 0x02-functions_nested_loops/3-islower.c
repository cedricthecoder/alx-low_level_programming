#include <stdio.h>
#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: parameter to be checked
 * Return: 1 or 0
 */
int islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
