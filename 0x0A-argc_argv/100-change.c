#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int i;
	int result;
	int num_coins = 0;
	int denominations[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num_coins = atoi(argv[1]);
	result = 0;

	if (num_coins < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && num_coins >= 0; i++)
	{
		while (num_coins >= denominations[i])
		{
			result++;
			num_coins -= denominations[i];
		}
	}
	printf("%d\n", result);
	return (0);
}

