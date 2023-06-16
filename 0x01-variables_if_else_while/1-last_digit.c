#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
/**
 * main - if else statement
 *
 * Return: 0
 *
 */
int main(void)
{
	int n;
	int numl;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is ", numl);
	numl = n % 10;
	if (numl > 5)
	{
		printf("%d is greater than 5\n", numl);
	}
	else if ((n < 6) && (num < 0))
	{
		printf("%d and is less than 6 and not 0\n", numl);
	}
	else
	{
		printf("%d is 0\n", num);
	}
	return (0);
}
