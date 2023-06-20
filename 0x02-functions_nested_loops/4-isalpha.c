#include "main.h"
/**
 * _isalpha - prints small letter
 * @c: The character to be checked.
 * Return: 0 or 1
 *
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
