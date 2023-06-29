nclude "main.h"

/**
 * reverse_array - reverses array of integers
 * @a: array to be reversed
 * @n: number of elements
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int m = n - 1;
	int temp;

	while (i < n / 2)
	{
		temp = a[m];
		a[m] = a[i];
		a[i] = temp;
		i++;
		m--;
	}
}
