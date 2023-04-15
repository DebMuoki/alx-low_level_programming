#include <stdio.h>
/**
 * main - entry point
 * printf - prints formatted text to the console
 * sizeof - returns the size in bytes of its operand	* Return: 0 for success
 */

int main(void)
{
	printf("Size of char: %d byte(s)\n", sizeof(char));
	printf("Size of short: %d byte(s)\n", sizeof(short));
	printf("Size of int: %d byte(s)\n", sizeof(int));
	printf("Size of long int: %d byte(s)\n", sizeof(long int));
	printf("Size of long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of float: %d byte(s)\n", sizeof(float));
	printf("Size of double: %d byte(s)\n", sizeof(double));
	printf("Size of long double: %d byte(s)\n", sizeof(long double));
	printf("Size of void*: %d byte(s)\n", sizeof(void *));
	return (0);
}
