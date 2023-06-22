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

	for (j = 1; j <= n; j++)
	{
		for (i = 0; i < j; i++)
		{
			_putchar (' ');
		}
		_putchar ('\\');
		_putchar ('\n');
	}
}
