#include "main.h"

/**
* _memcpy - Copies a memory area from src to dest.
* @dest: Pointer to the destination memory area.
* @src: Pointer to the source memory area.
* @n: The number of bytes to copy.
* Return: A pointer to dest.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
