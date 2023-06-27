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
	remaining = 2772;
	for (i = 0; i < 30; i++)
	{
		passw[i] = rand() % max;
		putchar(passw[i] + '0');
		remaining -= passw[i];
	}
	if (remaining < 78)
	{
		passw[i++] = remaining;
		putchar(passw[i - 1] + '0');
	}
	else
	{
		while (remaining > 0)
		{
			int num = (remaining > 78) ? 78 : remaining;

			passw[i++] = num;
			putchar(num + '0');
			remaining -= num;
		}
	}

	return (0);
}
