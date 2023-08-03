#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: The converted number, or 0 if there is one or more chars in the
 * string b that is not 0 or 1, or b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	 unsigned int num = 0;
	 int idx = 0;

	if (b == NULL)
		return (0);

	while (b[idx])
	{
		if (b[idx] != '0' && b[idx] != '1')
			return (0);

		num <<= 1;
		num += b[idx] - '0';
		idx++;
	}

	return (num);
}


