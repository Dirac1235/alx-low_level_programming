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
	int num2;

	for (num = 0; num < 10; num++)
	{
		for (num1 = num + 1; num1 < 10; num1++)
		{
			for(num2 = num1 + 1; num2 < 10; num2++)
			{
				putchar ((num % 10) + '0');
				putchar ((num1 % 10) + '0');
				putchar ((num2 % 10) + '0');
				if (num1 == 9 && num == 8 && num2 == 7)
				{
					break;
				}
				putchar (',');
				putchar (' ');
			}
			if (num == 9 && num1 == 8 && num2 == 7)
			{
				break;
			}
		}
		if (num == 8 && num1 == 9 && num2 == 7)
		{
			break;
		}
	}
	putchar ('\n');
	return (0);
}
