#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int num;
	long int snum;
	long int ssnum;
	int i, j;
	int max = -1;

	num = 612852475143;
	snum = sqrt(num);
	ssnum = sqrt(snum);

	for (j = snum; j > 1; j--)
	{
		if (num % j == 0)
		{
			ssnum = sqrt(j);
			for (i = ssnum; i > 2; i--)
			{
				if (j % i == 0)
				{
					max = -1;
					break;
				}
			}
			if (i == 2)
			{
				max = j;
				break;
			}
		}
	}

	printf("%d", max);
	return (0);
}
