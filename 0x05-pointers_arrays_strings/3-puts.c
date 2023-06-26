#include "main.h"

/**
 * _puts - updates the value of the variable
 *
 * @str: pointer to the first number
 *
 */
void _puts(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		_putchar (str[count]);
		count++;
	}

	return (count);
}
