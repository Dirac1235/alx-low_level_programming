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
	int passw[50];
	int i;
	int max;

	srand(time(NULL));
	max = 100;

	for (i = 0; i < 50; i++)
	{
		passw[i] = rand() / max;
		putchar(passw[i] + '0');
	}

	return (0);
}
