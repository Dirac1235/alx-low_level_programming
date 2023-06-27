#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords
 *
 * Return: Always 0
 */
int main(void)
{
	int passw[100];
	int i;
	int max;
	int remaining;

	srand(time(NULL));
	max = 78;

	for (i = 0; i < 31; i++)
	{
		passw[i] = rand() % max;
		putchar(passw[i] + '0');
	}
	remaining = 2772 - sum;
	remaining %= max;
	putchar(remaining + '0');

	return (0);
}
