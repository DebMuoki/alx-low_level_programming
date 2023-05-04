#include "main.h"
/**
 * flip_bits - function returns number of bits needed to flip
 * to get from one no. to another.
 * @n: the first number
 * @m: the second number
 *
 * Return: returns number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int count = 0;

	while (diff > 0)
	{
	count += diff & 1;
	diff >>= 1;
	}

	return (count);
}

