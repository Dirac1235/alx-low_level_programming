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
	printf("Last digit of %d is ", n);
	numl = n % 10;
	if (numl > 5)
	{
		printf("%d and is greater than 5\n", numl);
	}
	else if ((numl < 6) && (numl < 0))
	{
		printf("%d and is less than 6 and not 0\n", numl);
	}
	else
	{
		printf("%d and is 0\n", numl);
	}
	return (0);
}
