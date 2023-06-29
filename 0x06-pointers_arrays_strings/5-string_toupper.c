#include "main.h"
/**
 * string_toupper - changes to uppercase letter
 *
 * @c: the character to be chaged
 * Return: uppercase letters
 */
char *string_toupper(char *c)
{
	int count = 0;
	int t;
	char a;

	while (c[count] != '\0')
	{
		if (c[count] >= 'a' && c[count] <= 'z')
		{
			a = c[count] - 32;
			c[count] = a;
		}
		count++;
	}
	return (c);
}
