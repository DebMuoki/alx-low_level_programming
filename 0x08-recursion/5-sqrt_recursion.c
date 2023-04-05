#include "main.h"
/**
  * _sqrt_recursion - retursn the naturale squeroot of a number
  * @n: number whose square root is being found
  * Return: returns natural squareroot
  */

int _sqrt_recursion(int n)
{
	int i = 1;
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	while (i * i < n)
		i++;
	return ((i * i ==n) ? i : -1);
}
