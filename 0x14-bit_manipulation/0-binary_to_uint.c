#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: this is a pointer to a string of 0 and 1 chars
 *
 * Return: returns converted number or 0 if there is one/more chars in string
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	for (; *b != '\0'; b++)
	{
		if (*b == '0' || *b == '1')
			result = (result << 1) + (*b - '0');
		else
			return (0);
	}

	return (result);
}

