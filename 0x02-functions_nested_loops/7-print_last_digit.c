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

	d = (c >= 0) ? c : -c;
	b = d % 10;
	_putchar (b + '0');
	return (b);
}
