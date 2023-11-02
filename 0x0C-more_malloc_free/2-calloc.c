#include "main.h"
/**
 * _calloc - allocate memory using malloc and initialize it to zero
 *@nmemb: number of elements
 *@size: size of the memory block to be allocated
 *Return: poiner to the address of the memory block
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *blk;
	unsigned int j;

	if (nmemb == 0 || size == 0)
		return (NULL);
	blk = malloc(nmemb * size);
	if (blk != NULL)
	{
		for (j = 0; j < (nmemb * size); j++)
			blk[i] = 0;
		return (blk);
	}
	else
		return (NULL);
}
