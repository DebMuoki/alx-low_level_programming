#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Function returns sum of all parameters.
 * @n: number of arguments.
 * Return: The sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int index;

	if (n == 0)
	return (0);

	va_start(args, n);

	for (index = 0; index < n; index++)
	sum += va_arg(args, int);

	va_end(args);

	return (sum);
}

