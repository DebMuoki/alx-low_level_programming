#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - the entry point of the argument
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: the return value is 0
 **/


int main(int argc, char *argv[])
{
	/*variable declaration*/
	int value1;
	int value2;
	int product;

	if (argc < 3 || argc > 3)
	{
	printf("Error\n");
	return (1);
	}

	value1 = _atoi(argv[1]);
	value2 = _atoi(argv[2]);
	product = value1 * value2;

	printf("%d\n", product);
	return (0);

}
/**
 * _atoi - Converts a string to an integer
 * @string: The string to be converted
 *
 * Return: The integer converted from the string
 */
int _atoi(char *string)
{
	int index = 0;
	int d = 0;
	int num = 0;
	int value = 0;
	int j = 0;
	int digit = 0;

	while (string[value] != '\0')
		value++;

	while (index < value && j == 0)
	{
		if (string[index] == '-')
			++d;

		if (string[index] >= '0' && string[index] <= '9')
		{
			digit = string[index] - '0';
			if (d % 2)
				digit = -digit;
			num = num * 10 + digit;
			j = 1;
			if (string[index + 1] < '0' || string[index + 1] > '9')
				break;
			j = 0;
		}
		index++; /* increment variable*/
	}

	if (j == 0)
		return (0);

	return (num);
}

