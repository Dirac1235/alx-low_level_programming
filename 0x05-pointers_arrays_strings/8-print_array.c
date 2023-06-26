#include "main.h"

/**
 * print_array- updates the value of the variable
 *
 * @a: pointer to the first number
 * @n: size of the array
 *
 */
void print_array(int *a, int n)
{
	int i;

	printf("%d", a[0]);
	for (i = 1; i < n; i++)
	{
		printf(", %d", a[i]);
	}
	printf("\n");
}
