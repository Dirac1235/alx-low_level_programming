#include "main.h"

/**
 * print_line - prints number form 0 to 9
 *
 * @c: number of lines to print
 *
 * Return: nothing
 */
void print_line(int c)
{
	int i;

	for (i = 0; i < c; i++)
	{
		_putchar ('_');
	}
	_putchar ('\n');
}
