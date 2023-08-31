#include "main.h"
/**
 * flip_bits - it count the number of bits to be filiped to get some number
 * @n: first number
 * @m: The second number
 * Return: the number of flipped bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0;
	int first, last, is_f_one, is_l_one;
	int count = 0;

	while (n >> i || m >> i)
	{
		first = n >> i;
		last = m >> i;
		is_f_one = 0;
		is_l_one = 0;
		if (first & 1)
			is_f_one = 1;
		if (last & 1)
			is_l_one = 1;
		if (is_f_one ^ is_l_one)
			count++;
	}
	return (count);
}
