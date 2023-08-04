#include "main.h"
#include <stdio.h>

/**
 * get_bit - it finds the bit of decimal
 * at given index
 * @n: The decimal number
 * @index: the index to bit
 *
 * Return: the bit at that index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 64)
		return (-1);

	bit = n >> index;
	return (bit & 1);
}
