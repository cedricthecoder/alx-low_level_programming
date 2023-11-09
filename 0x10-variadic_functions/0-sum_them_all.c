#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - sum of all paramters
* @n: number of paramters
* @...: A variable number
* Return: If n == 0 - 0
* Otherwise - the sum of all parameters.
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int ind, s = 0;

	va_start(nums, n);
	for (ind = 0; ind < n; ind++)
	s += va_arg(nums, int);
	va_end(nums);
	return (s);
}
