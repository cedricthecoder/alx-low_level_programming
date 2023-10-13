#include "main.h"

/**
*_isupper - makes the check for upper case letters
*@c: function parameter
*Return: 1 on success and 0 on failure
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
