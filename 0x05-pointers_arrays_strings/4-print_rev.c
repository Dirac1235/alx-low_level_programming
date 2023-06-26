#include "main.h"

/**
 * print_rev - updates the value of the variable
 *
 * @s: pointer to the first number
 *
 */
void print_rev(char *s)
{
	int count;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}
	while (count >= 0)
	{
		_putchar (s[count]);
		count--;
	}
	_putchar ('\n');
}
