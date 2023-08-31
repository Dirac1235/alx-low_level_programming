#include "main.h"

int get_bit(unsigned long int n, unsigned int index)
{
	int count = 0;
	int shifted;

	while (n >> count)
		count++;

	shifted = n >> (count - index);

	if ((shifted & 1) == 1)
		return (1);
	return (0);
}
