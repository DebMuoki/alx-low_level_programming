#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Function that performs simple operations on two numbers.
 * @argc: number of arguments.
 * @argv: array of pointers to the arguments
 * Return: 0 on success, 98, 99, or 100 on failure.
 */

int main(int argc, char *argv[])
{
	int int1, int2, answer;
	int (*op_func)(int, int);

	if (argc != 4)
	{
	printf("Error\n");
	return (98);
	}

	int1 = atoi(argv[1]);
	int2 = atoi(argv[3]);

	op_func = get_op_func(argv[2]);

	if (op_func == NULL || argv[2][1] != '\0')
	{
	printf("Error\n");
	return (99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && int2 == 0)
	{
	printf("Error\n");
	return (100);
	}

	answer = op_func(int1, int2);
	printf("%d\n", answer);

	return (0);
}

