#include "main.h"
#include <stdio.h>

/**
 * main - the entry point
 * @argc: number of arguments passed in a program
 * @argv: array of arguments in the program
 * Return: 0 upon success
 */

int main(int argc, char *argv[])
{
(void) argv; /*argv is ignored*/
	printf("%d\n", argc - 1);

	return (0);
}
