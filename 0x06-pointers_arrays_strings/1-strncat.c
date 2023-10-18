#include "main.h"
/**
*_strncat - other functon that concatenates two strings
*@dest: parameter 1
*@src: parameter 2
*@n: parameter 3
*Return: void
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
