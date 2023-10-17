#include "main.h"
/**
* swap_int - swaps 2 integers values
* @a: integer
* @b: integer
*/
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
