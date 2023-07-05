#include "main.h"

int iprime(int m, int n);

/**
 * is_prime_number - tells if an integer is a prime number or not
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (iprime(n, n - 1));
}

/**
 * iprime - calculates if a number is prime recursively
 * @m: number
 * @n: number
 *
 * Return: 1 if n is prime, 0 if not
 */
int iprime(int m, int n)
{
	if (n == 1)
		return (1);
	if (m % n == 0)
		return (0);
	return (iprime(m, n - 1));
}
