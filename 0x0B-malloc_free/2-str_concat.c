#include "main.h"
/**
 * str_concat - a function that concatenates two strings.
 *@s1:First string
 *@s2:Second string
 *Return: NULL in case of failure , but pointer to new string in
 *case of success
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int ind, concat_ind = 0,  len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (ind = 0; s1[ind] || s2[ind]; ind++)
		len++;
	concat_str = malloc(sizeof(char) * len);
	if (concat_str == NULL)
		return (NULL);
	for (ind = 0; s1[ind]; ind++)
		concat_str[concat_ind++] = s1[ind];
	for (ind = 0; s2[ind]; ind++)
		concat_str[concat_ind++] = s2[ind];
	return (concat_str);
}
