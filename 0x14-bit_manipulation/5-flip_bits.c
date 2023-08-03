#include "main.h"

/**
 * flip_bits - function counts the bits its needed to flip
 * @n: This is The first number.
 * @m: The second number.
 * Return: The number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}

	return (count);
}

