#include "main.h"

/**
 * swap_int - updates the value of the variable
 *
 * @a: pointer to the first number
 * @b: pointer to the second number
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
