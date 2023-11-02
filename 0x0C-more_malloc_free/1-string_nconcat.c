#include "main.h"
/**
 *string_nconcat - Concatenates two strings using at
 *most an inputted number of bytes.
 *@s1: The first string.
 *@s2: The second string.
 *@n: The maximum number of bytes of s2 to concatenate to s1.
 *Return: If the function fails - NULL.
 *Otherwise - a pointer to the concatenated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *conc;
	unsigned int len = n, ind;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (ind = 0; s1[ind]; ind++)
		len++;
	conc = malloc(sizeof(char) * (len + 1));
	if (conc == NULL)
		return (NULL);
	len = 0;
	for (ind = 0; s1[ind]; ind++)
		conc[len++] = s1[ind];
	for (ind = 0; s2[ind] && ind < n; ind++)
		conc[len++] = s2[ind];
	conc[len] = '\0';
	return (conc);
}
