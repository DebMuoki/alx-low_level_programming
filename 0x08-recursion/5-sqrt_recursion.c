#include "main.h"
/**
 * _sqrt_recursion - function that returns the natural squareroot of a number
 * @n: the number
 * Return: the natural squareroot of the number
 **/



int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (the_sqrt_recursion(n, 0));
}

/**
 * the_sqrt_recursion - this function finds the squareroot using recursion
 * @n: the number to find its square root
 * @index: this is the iterator
 * Return: the return value is the actual value of the square root
 **/

int the_sqrt_recursion(int n, int index);


int the_sqrt_recursion(int n, int index)
{
	if (index * index == n)
		return (index);
	if (index * index > n)
		return (-1);
	return (the_sqrt_recursion(n, index + 1));
}
