#include <stdio.h>

/**
 * main - prints the sum of all the multiples of 3 or 5 below 1024
 *
 * Return: Always 0
 */
int main(void)
{
	int x;
	int y;
	int sum;
	int i;

	x = 0;
	y = 0;
	sum = 0;

	for (i = 0; i < 1024; ++i)
	{
		if ((i % 3) == 0)
		{
			x = x + i;
		} else if ((i % 5) == 0)
		{
			y = y + i;
		}
	}
	sum = x + y;
	printf("%d\n", sum);
	return (0);
}
