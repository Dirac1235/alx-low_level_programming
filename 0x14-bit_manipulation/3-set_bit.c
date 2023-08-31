#include "main.h"

/**
 * set_bit - It sets bit to one at given index
 * @n: the number which the bit is to be changed to 1
 * @index: The index of the bit to be changed to one
 * Return: 0 on success, -1 if not
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num = 1;

	if (n)
		return (-1);

	*n = *n | (num << index);
	return (0);
}
