#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: no of parameters passed to the function
 *
 * Return: the sum of all parameters, else 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
		va_list args;
		unsigned int j;
		int sum = 0;

		if (n == 0)
			return (0);

		va_start(args, n);

		for (j = 0; j < n; j++)
			sum += va_arg(args, int);

		va_end(args);

		return (sum);
}

