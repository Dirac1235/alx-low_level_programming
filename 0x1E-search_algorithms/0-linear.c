#include "search_algos.h"

/**
 * linear_search - searchs for value using the linear
 * algorithm
 * @array: The list of numbers we perform linear search
 * @size: The size of the array
 * @value: The value we search for in the list
 *
 * Return: The index of the value where the number is found else -1
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array [%d] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}
	return (-1);
}
