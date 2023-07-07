#include <stdio.h>
#include "main.h"
/**
 * _atoi - prints the integer value of the first,
 * encounterd integer
 *
 * @str: pointer to the string
 *
 *Return: the integer
 */
int _atoi(char *str)
{
	int index = 0;
	int countNegatives = 0;
	int result = 0;
	int length = 0;
	int foundDigit = 0;

	while (*(str + length) != '\0')
		length++;

	for (index = 0; index < length && foundDigit == 0; index++)
	{
		if (*(str + index) == '-')
			countNegatives++;

		if (*(str + index) >= '0' && *(str + index) <= '9')
		{
			int digit = *(str + index) - '0';

			if (countNegatives % 2)
				digit = -digit;
			result = result * 10 + digit;
			foundDigit = 1;
			if (*(str + index + 1) < '0' || *(str + index + 1) > '9')
				break;
			foundDigit = 0;
		}
	}

	if (foundDigit == 0)
		return (0);

	return (result);
}
/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
