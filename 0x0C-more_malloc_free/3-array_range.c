#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: smallest number in the array
 * @max: lagrest value in the array
 * Return: pointer to the address of the memory block
 */
int *array_range(int min, int max)
{
	int *blk;
	int m, n = 0;

	if (min > max)
		return (NULL);
	blk = malloc(sizeof(*blk) * ((max - min) + 1));
	if (blk != NULL)
	{
		for (m = min; m <= max; m++)
		{
			blk[n] = m;
			n++;
		}
		return (blk);
	}
	else
		return (NULL);
}
