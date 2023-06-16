#include <stdio.h>

/**
 * main - one upto ten
 *
 * Return: 0.
 */
int main(void)
{
	int num;
	int num1;

	for (num = 0; num < 10; num++)
	{
		for (num1 = 0; num1 < 10; num1++)
		{
			putchar((num % 10) + '0');
			putchar((num1 % 10) + '0');
		}
		if (num == 9)
		{
			continue;
		}
		putchar (',');
		putchar (' ');
	}
	return (0);
}
