#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

/**
 * print_char - Prints a char
 * @arg: arguments to character to be printed
 */
void print_char(va_list arg)
{
	char ltr;

	ltr = va_arg(arg, int);
	printf("%c", ltr);
}

/**
 * print_int - Prints an int
 * @arg: arguments to integer to be printed
 */
void print_int(va_list arg)
{
	int nm;

	nm = va_arg(arg, int);
	printf("%d", nm);
}

/**
 * print_float - Prints a float
 * @arg: arguments to float to be printed
 */
void print_float(va_list arg)
{
	float nm;

	nm = va_arg(arg, double);
	printf("%f", nm);
}

/**
 * print_string - Prints a string
 * @arg: arguments to string to be printed
 */
void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
 * print_all - Prints everything then a new line.
 * @format: A string of characters
 * @...: A variable number to be printed
 * Description: Any other argument is ignored
 * If a string argument is NULL, (nil) is printed instead.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int m = 0, n = 0;
	char *separator = "";
	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && (*(format + m)))
	{
		n = 0;

		while (n < 4 && (*(format + m) != *(funcs[n].symbol)))
			n++;

		if (n < 4)
		{
			printf("%s", separator);
			funcs[j].print(args);
			separator = ", ";
		}

		m++;
	}

	printf("\n");

	va_end(args);
}
