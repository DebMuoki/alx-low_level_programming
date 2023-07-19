#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of its own main function.
 * @argc: The number of arguments.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, num_bytes;

	if (argc != 2)
	{
	printf("Error\n");
	}
	return (1);


	num_bytes = atoi(argv[1]);

	if  (num_bytes < 0)
	{
		printf("Error\n");
	return (2);
	}

	unsigned char *main_addr = (unsigned char *)main;

	for (i = 0; i < num_bytes; i++)
	{
	printf("%02x", main_addr[i]);
	}
	printf("\n");

	return (0);
}

