#include "main.h"

/**
 * print_binary - Function prints the binary representation of a number.
 * @n: The number to print in binary.
 * Return: return value is void
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}

