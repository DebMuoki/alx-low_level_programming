#include <stdio.h>

/**
 * main - This is the entry point of the program
 * @argc: this is the number of command line arguments
 * @argv: this is an array of strings containing the arguments
 **/

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return 0;
}

