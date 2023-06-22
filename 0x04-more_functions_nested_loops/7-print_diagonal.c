#include "main.h"

/**
 * print_diagonal - prints number form 0 to 9
 *
 * @n: number of lines to print
 *
 * Return: nothing
 */
void print_diagonal(int n)
{
	int i, j;

	for (j = 0; j < n; j++)
	{
		for (i = 0; i < n; i++)
		{
			if (j == i)
				_putchar('\\');
			else if (i < j)
				_putchar(' ');
		}
		_putchar ('\n');
	}
	if (n < 1)
	{
		_putchar ('\n');
	}
}
