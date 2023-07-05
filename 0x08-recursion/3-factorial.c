#include "main.h"
/**
 * factorial - Calculates the factorial of number
 * @n: the factorial of the number
 * Return: the factorial
 */
int factorial(int n)
{
	if (n < 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
