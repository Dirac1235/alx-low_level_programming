#include <stdio.h>
/**
 * main - putchar except q and e
 *
 * Return: 0
 *
 */
int main(void)
{
	int i = 97;

	for (; i < 123 ; i++)
	{
		if (i != 'q' && i != 'e')
		{
			putchar (i);
		}
	}
	putchar ('\n');
	return (0);
}
