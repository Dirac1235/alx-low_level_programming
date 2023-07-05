#include "main.h"
int isqrt(int m, int n);
/**
 * _sqrt_recursion - Calculates the square root of number
 * @n: the number
 * Return: the square root of the number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	return (isqrt(n, n - 1));
}
/**
 *isqrt - calculates the square root recursively
 * @m: first parameter
 * @n: second parameter
 * Return: the square root
 */
int isqrt(int m, int n)
{
	if (n == 0)
		return (-1);
	else if ((float)m / (float)n == n)
		return ((int)n);
	else
		return (isqrt(m, n - 1));
}
