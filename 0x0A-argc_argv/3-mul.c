#include <stdio.h>
#include <stdlib.h>

/**
 * main - this is the entry point
 * @argc: this is the number of arguments
 * @argv: this is an array of arguments
 * Return: return value is Zero
 **/

int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
        int num2 = atoi(argv[2]);

        int result = num1 * num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", result);
	return (0);
}

