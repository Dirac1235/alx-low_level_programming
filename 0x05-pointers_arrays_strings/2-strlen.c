#include "main.h"

/**
 * _strlen - updates the value of the variable
 *
 * @s: pointer to the first number
 *Return: the length of the string
 */
int _strlen(char *s)
{
	int count;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}

	return (count);
}
