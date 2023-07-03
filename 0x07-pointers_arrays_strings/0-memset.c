#include "main.h"
/**
 * _memset - fills the first n bites of the memory
 *@s: the array to be filled
 *@b: the character to be filled in
 *@n: the number of charcters that are filled in
 *Return: the array
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
