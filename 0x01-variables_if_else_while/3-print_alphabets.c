#include <stdio.h>

/**
 * main - Prints the alphabet both in lowercase and in uppercase.
 *
 * Return: 0
 */
int main(void)
{
	char let;

	for (let = 'a'; let <= 'z'; let++)
		putchar(let);

	for (let = 'A'; let <= 'Z'; let++)
		putchar(let);

	putchar('\n');

	return (0);
}
