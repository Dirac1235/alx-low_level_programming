#include "main.h"


void print_binary(unsigned long int n)
{
	int i = 0;
	int num;

	while (n >> i)
	{
		i++;
	}
	i--;
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (i >= 0)
	{
		num = n >> i;
		if ((num & 1) == 1)
			_putchar('1');
		else
		_putchar('0');
		i--;
	}
}
