#include "variadic_functions.h"

/**
 * sum_them_all - it calculates the sum of the parameters
 * @n: the number of the arguments
 *
 * Return: the sum of the arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list li;
	int i;
	unsigned int j;
	unsigned int sum = 0;

	va_start(li, n);
	for (j = 0; j < n; j++)
	{
		i = va_arg(li, int);
		sum += i;
	}
	va_end(li);
	return (sum);
}

