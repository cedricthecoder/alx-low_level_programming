#include <stdio.h>
/**
 *main - this is the main function
 *
 *Return: always 0
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{ putchar (letter);
	letter++;
	}
	char letter = 'A';

	while (letter <= 'Z')
	{ putchar (letter);
	letter++;
	putchar('\n');
	return (0);
}
