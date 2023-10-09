#include <stdio.h>
/**
 *main - this is the main function
 *
 *Return: always 0
 */
int main(void)
{
	char letter = 'a';

	char letter1 = 'A';

	while (letter <= 'z')
	{ putchar(letter);
		letter++;
	}
	while (letter <= 'Z')
	{ putchar(letter1);
		letter1++;
	}
	putchar('\n');
	return (0);
}
