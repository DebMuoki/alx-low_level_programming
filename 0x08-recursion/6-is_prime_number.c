#include "main.h"

/**
  * is_divisible - helper function checks divisibility of number .
  * @n: number to check.
  * @i: divisor to check.
  * Return: -1 if @n is divisible by @i else -0.
  */

int is_divisible(int n, int i)
{
	if (i == 1)
		return (0);
	if (i == 2)
		return (!(n % 2));
	return ((n % i == 0) ? 1 : is_divisible(n, i - 1));
}

/**
  * is_prime_number - checks for prime numbers.
  * @n: number to check.
  * Return: -1 if @n is divisible by @i else -0.
  */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	return (!is_divisible(n, n - 1));
}
