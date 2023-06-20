#include "main.h"
/**
 * jack_bauer - prints small letter
 *
 * Return: void
 */
void jack_bauer(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	while (a != 2 || b != 4)
	{
		_putchar (a + '0');
		_putchar (b + '0');
		_putchar (':');
		_putchar (c + '0');
		_putchar (d + '0');
		_putchar ('\n');
		if (b == 9 && c == 5 && d == 9)
		{
			a += 1;
			b = 0;
		}
		if (c == 5 && d == 9)
		{
			b += 1;
		}
		if (d == 9)
		{
			c += 1;
		}
		d += 1;
		c = c % 6;
		d = d % 10;
	}
}
