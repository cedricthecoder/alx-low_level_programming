#include <stdio.h>
/**
 *main - This is the main function
 *
 *Return: always 0
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{ putchar(letter);
	 letter++;
	}
	putchar('\n');
	return (0);
}
