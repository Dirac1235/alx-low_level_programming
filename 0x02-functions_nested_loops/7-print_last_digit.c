#include "main.h"
/**
 * print_last_digit - prints small letter
 * @c: The character to be checked.
 * Return: The last digit
 *
 */
int print_last_digit(int c)
{
	int b;
	int d;

	b = c % 10;
	d = (b >= 0) ? b : -b;
	_putchar (d + '0');
	return (d);
}
