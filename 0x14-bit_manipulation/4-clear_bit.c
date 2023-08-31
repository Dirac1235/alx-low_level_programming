#include "main.h"

/**
 * clear_bit - sets value of a bit to 0 at a given index
 * @n: decimal number
 * @index: index position to change, starting from 0 to 64
 * Return: 1 if it works, -1 if not
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int pow;
	unsigned long int l;

	if (index > 64)
		return (-1);

	l = index;
	for (pow = 1; l > 0; l--, pow *= 2)
		;
	if ((*n >> index) & 1)
		*n -= pow;

	return (1);
}
