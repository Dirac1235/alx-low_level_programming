#include <stdlib.h>
#include "main.h"

/**
 * *array_range - allocates memory
 * @min: the minimum limit
 * @max: the maximum limit
 *
 * Return: a pointer to the array
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	size = max - min + 1;
	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);
	if (min > max)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		arr[i] = min++;
	}
	return (arr);
}
