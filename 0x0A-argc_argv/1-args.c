#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: this is the number of arguments
 * @argv: this is the array of arguments
 * Return: the return value is void
 **/

int main(int argc, char *argv[])
{
	(void)argv;/* Ignore this variable */

	printf("%d\n", argc - 1);
	return (0);
}

