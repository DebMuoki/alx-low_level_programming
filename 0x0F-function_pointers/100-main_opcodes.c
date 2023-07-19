#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - Function that Prints opcodes of a given function.
 * @func: function pointer to the function whose opcodes are to be printed.
 * @bytes: This is the number of bytes to print.
 * Return: return value is void
 */
void print_opcodes(void (*func)(void), int bytes)
{
	unsigned char *opcodes = (unsigned char *)func;
	int i;

	for (i = 0; i < bytes; i++)
	{
		printf("%02x", opcodes[i]);
		if (i < bytes - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - Prints its own opcodes.
 * @argc: The Number of arguments.
 * @argv: The Array of arguments.
 * Return: Always 0 on Success.
 */
int main(int argc, char *argv[])
{
	int bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes <= 0)
	{
		printf("Error\n");
		exit(2);
	}

	print_opcodes((void (*)(void))main, bytes);

	return (0);
}

