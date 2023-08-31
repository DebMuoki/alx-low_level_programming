#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - Function converts a binary number to an unsigned int.
 * @b: A pointer to a string containing the binary number.
 * Return: The converted number, or 0 if there is an invalid character
 */

unsigned int binary_to_uint(const char *b)
{
	int k;
	unsigned int result = 0;

	if (!b)
		return (0);

	for (k = 0; b[k]; k++)
	{
		if (b[k] < '0' || b[k] > '1')
			return (0);
		result = 2 * result + (b[k] - '0');
	}

	return (result);
}
