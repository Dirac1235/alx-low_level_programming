#include "main.h"

/**
 * clear_bit - Clears bit at given index
 * @n: The number to be cleared
 * @index: the index of the bit to be cleared
 * Return: 0 if success, -1 if not
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	int num = 1;

	if (n)
		return (-1);
	*n = ~(*n);
	*n = *n | (num << index);
	*n = ~(*n);
	return (0);
}
