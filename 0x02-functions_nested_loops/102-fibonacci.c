#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	long int a;
	long int b;
	long int next;

	a = 1;

	b = 2;

	for (i = 1; i <= 50; ++i)
	{
		if (a != 20365011074)
		{
			printf("%ld, ", a);
		} else
		{
			printf("%ld\n", a);
		}
		next = a + b;
		b = a;
		a = next;
	}

	return (0);
}
