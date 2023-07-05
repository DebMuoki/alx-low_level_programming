#include "main.h"

int check_prime_number(int n, int index);

/**
 * is_prime_number - function that determines if a number is prime or not
 * @n: the number
 * Return: 1 if the number is a prime number and 0 if it is not
 **/

int is_prime_number(int n)
{
	if (n <= 1) /* a negative number and 1 are not prime numbers */
		return (0);
	else
		return (check_prime_number(n, n - 1));
}

/**
 * check_prime_number - function that recurses to check for prime number
 * @n: the number
 * @index: an iterator
 * Return: the return value is 1 if prime  and 0 if not
 **/

int check_prime_number(int n, int index)
{
	if (index == 1)
		return (1); /* the base statment */
	if (n % index == 0 && index > 0)
		return (0);
	return (check_prime_number(n, index - 1));

}
