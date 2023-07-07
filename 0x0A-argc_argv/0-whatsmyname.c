#include <stdio.h>
/**
 * main - prints the name of the file
 * @argc: number of arguments
 * @argv: array fof arguments
 *
 * Return: zero
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return(0);
}
