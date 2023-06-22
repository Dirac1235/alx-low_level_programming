#include "main.h"

/**
 * print_square - prints '#' to the screen
 *
 * @size: number of lines to print
 *
 * Return: nothing
 */
void print_square(int size)
{
	int i, j;

	for (j = 0; j < size; j++)
	{
		for (i = 0; i < size; i++)
		{
			_putchar('#');
		}
		_putchar ('\n');
	}
}
