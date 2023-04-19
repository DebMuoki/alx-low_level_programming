#include <stdio.h>
#include <stdio.h>


/**
 * print_opcodes - prints the opcodes of its own code
 * @num_bytes: number of bytes to print
 *
 * This function takes an integer @num_bytes as input and prints the opcodes of
 * its own code starting from its memory address. It does this by casting the
 * function pointer to an @unsigned char* pointer and then printing the content
 * of the memory addresses starting from the function's address for @num_bytes
 * bytes.
 */
void print_opcodes(int num_bytes)
{
		unsigned char *ptr = (unsigned char *)print_opcodes;
		int i;
		for (i = 0; i < num_bytes; i++)
			printf("%02x ", *(ptr + i));
		printf("\n");
}

/**
 * main - main function
 * @argc: number of command-line arguments
 * @argv: array of command-line argument strings
 *
 * This function checks the number of command-line arguments and converts the
 * argument to an integer using @atoi. It then calls @print_opcodes with the
 * converted integer as input.
 *
 * Return: 0 on success, 1 if the number of arguments is incorrect, or 2 if the
 *         number of bytes is negative.
 */
int main(int argc, char *argv[])
{
		if (argc != 2)
		{
			printf("Error\n");
			return (1);
		}
		int num_bytes = atoi(argv[1]);

		if (num_bytes < 0)
		{
			printf("Error\n");
			return (2);
		}
		print_opcodes(num_bytes);
	return (0);
}

