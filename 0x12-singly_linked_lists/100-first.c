#include <stdio.h>

/**
 * premain - Function prints a message before main is executed
 * Return: void
 */

void __attribute__ ((constructor)) premain()
{
		printf("You're beat! and yet, you must allow,\n");
		printf("I bore my house upon my back!\n");
}

