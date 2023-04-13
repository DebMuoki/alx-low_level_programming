#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
  * is_digits - function checks if given string contains only digits
  * @str: string to be checked
  * Return: 1 if string contains digits only , 0 if otherwise
  */

int is_digits(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (!isdigit(str[i]))
		return (0);
		i++;
	}
	return (1);
}

/**
  * multiply - multiplies two numbers
  * @num1: first number to multiply
  * @num2: second number to multiply
  */

void multiply(char *num1, char *num2)
{
	int len1 = strlen(num1);
	int len2 = strlen(num2);
	int *result = (int *)malloc(sizeof(int) * (len1 + len2));

	/*initialize result array with zerros*/
	int i, j;

	for (i = 0; i < len1 + len2; i++)
		result[i] = 0;

	/* multiply digits from right to left*/
	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			int mul = (num1[i] - '0') * (num2[j] - '0');
			int sum = result[i + j + 1] + mul;

			result[i + j + 1] = sum % 10;
			result[i + j] += sum / 10;
		}
	}
	/* print result array*/
	i = 0;

	while (i < len1 + len2 && result[i] == 0)
		i++;
	if (i == len1 + len2)
		printf("0");
	else
		for (; i < len1 + len2; i++)
			printf("%d", result[i]);
	printf("\n");

	free(result);
}
/**
  * main - entry point
  * @argc: number of arguments passed in a program
  * @argv: array of pointers to arguments
  * Return: 0 if successful, 98 if argument number is incorrect
  */
int main(int argc, char *argv[])
{
	/*check number of arguments*/
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	/* check if arguments contain only digits*/
	if (!is_digits(argv[1]) || !is_digits(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	/* Multiply two numbers*/
	multiply(argv[1], argv[2]);

	return (0);
}

