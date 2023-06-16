#include <stdio.h>
/**
 * main - putchar in reverse
 *
 * Return: 0
 *
 */
int main(void)
{
	int i = 122;

	for (; i <= 97 ; i++)
	{
		putchar (i);
	}
	putchar ('\n');
	return (0);
}
