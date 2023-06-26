#include "main.h"

/**
 * puts_half - updates the value of the variable
 *
 * @str: pointer to the first number
 *
 */
void puts_half(char *str)
{
	int count;
	int i;
	int j;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	j = count / 2;
	for (i = j; i < count; i++)
	{
		_putchar(str[i]);
	}
	_putchar ('\n');
}
