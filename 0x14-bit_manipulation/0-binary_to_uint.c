#include "main.h"

/**
 * binary_to_uint - Function converts a binary number to an unsigned int
 * @b: The string containing the binary number
 * Return: the converted number, else 0
 */
unsigned int binary_to_uint(const char *b)
{
	int index;
	unsigned int result = 0;

	if (!b)
		return (0);

	for (index = 0; b[index]; index++)
	{
		if (b[index] < '0' || b[index] > '1')
			return (0);
		result = 2 * result + (b[index] - '0');
	}

	return (result);
}

