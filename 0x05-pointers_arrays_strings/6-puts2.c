#include "main.h"

/**
 * puts2 - updates the value of the variable
 *
 * @str: pointer to the first number
 *
 */
void puts2(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		_putchar (str[count]);
		count += 2;
	}
	_putchar ('\n');
}
