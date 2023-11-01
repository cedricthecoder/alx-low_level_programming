#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated
 *space in memory, which contains a copy of the
 *string given as a parameter.
 *@str:String to be copied
 *Return: NULL in case of error, pointer to allocated
 *space
 */
char *_strdup(char *str)
{
	char *cpy;
	int ind, len;

	if (str == NULL)
		return (NULL);
	for (ind = 0; str[ind]; ind++)
		len++;
	cpy = malloc(sizeof(char) * (len + 1));
	if (cpy == NULL)
		return (NULL);
	for (ind = 0; str[ind]; ind++)
	{
		cpy[ind] = str[ind];
	}
	cpy[len] = '\0';
	return (cpy);
}
