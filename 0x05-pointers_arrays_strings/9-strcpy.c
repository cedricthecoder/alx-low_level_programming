#include "main.h"
/**
* *_strcpy - some function
* @dest: some parameter
* @src: some other parameter
* return: string
*/
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for (x = 0; x < 1; x++)
	{
		dest[x] = src[x];
	}
	dest[1] = '\0';
	return (dest);
}
