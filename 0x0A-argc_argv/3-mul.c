#include "main.h"
#include <stdio.h>
/**
  * _atoi - converts a string to an integer
  * @s: string awaiting conversion
  * Return: int converted from string
  */
int _atoi(char *s)
{
	int i = 0, n = 0, sign = 1;

	if (s[0] == '-')
		sign = -1, i++;

	while (s[i])
	{
		if (s[i] >= '0' && s[i] <= '9')
			n = n * 10 + s[i] - '0';
		else
			return (0);
		i++;
	}

	return (n * sign);
}

/**
  * main - function multiplies two numbers
  * @argc: number of arguments in a programme
  * @argv: the arrays of arguments
  * Return: 0 for success and 1 for Error
  */
int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);

	printf("%d\n", num1 * num2);

	return (0);
}
