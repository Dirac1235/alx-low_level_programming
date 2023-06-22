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
		for (j = size; j > 0; j--)
		{
			for (i = 0; i < j; i++)
			{
				_putchar(' ');
			}
			for (z = j; z <= size; z++)
				_putchar ('#');
			_putchar ('\n');
		}
	}
}
