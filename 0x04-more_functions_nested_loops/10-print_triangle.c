#include "main.h"

/**
 * print_triangle - prints '#' to the screen
 *
 * @size: number of lines to print
 *
 * Return: nothing
 */
void print_triangle(int size)
{
	int i, j, z;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 1; j <= size; j++)
		{
			for (i = j; i < size; i++)
			{
				_putchar(' ');
			}
			for (z = 1; z <= j; z++)
				_putchar ('#');
			_putchar ('\n');
		}
	}
}
