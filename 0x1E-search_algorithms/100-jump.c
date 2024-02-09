#include "search_algos.h"

/**
 * jump_search - searchs for value using hte jum search algorithm
 * @array: list for numers
 * @size: the size of the array
 * @value: the key that we will search for in the array
 *
 * Return: the index of the value if found else -1
 *
*/
int jump_search(int *array, size_t size, int value)
{
	int i;
	int prev;
	int a = 0;
	int val = (int)sqrt(size);

	if (array == NULL)
		return (-1);

	while (a < (int)size && array[a] < value)
	{
		printf("Value checked array[%d] = [%d]\n", a, array[a]);
		if (array[a] == value)
			return (a);
		prev = a;
		a = a + val;
	}
	printf("Value found between indexes [%d] and [%d]\n", prev, a);

	for (i = prev; i <= a; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
