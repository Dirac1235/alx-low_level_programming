#include "search_algos.h"

/**
 * binary_search - It searches for value in the array using binary
 * search algorithm
 * @array: the array which we will find the value
 * @size: the size of the array
 * @value: The value which we are looking for in the array
 *
 * Return: The index if it is found  else -1 if it is not found
 */

int binary_search(int *array, size_t size, int value)
{
	int left;
	int right;
	int mid;
	int i;

	if (array == NULL)
		return (-1);

	left = 0;
	right = (int)size - 1;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i == right)
				printf("%d", array[i]);
			else
				printf("%d, ", array[i]);
		}
		printf("\n");
		mid = (left + right) / 2;

		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
