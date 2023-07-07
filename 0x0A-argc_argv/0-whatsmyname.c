#include <stdio.h>

/**
 * main - This is the entry point of the program
 * @argc: This is the number of command-line arguments
 * @argv: This is an array of strings containing the command-line arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", *argv);
	return 0;
}

