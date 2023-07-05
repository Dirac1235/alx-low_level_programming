#include "main.h"
/**
 * _puts_recursion - i writes with recursion
 * @s: the char to be written
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
