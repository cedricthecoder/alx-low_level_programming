#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - check for Holberton School students.
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int m, n;
	int *operation;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	m = atoi(argv[1]);
	operation = argv[2];
	n = atoi(argv[3]);

	if (get_op_func(operation) == NULL || operation[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*operation == '/' && n == 0) || (*operation == '%' && n == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(operation)(m, n));
	return (0);
}
