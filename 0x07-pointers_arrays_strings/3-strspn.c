#include "main.h"
/**
 * _strspn - counts the  occurence in memory
 *@s: the array
 *@accept: charcter that is searched
 *Return: the number of occurences
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if (accept[j] == '\0')
		{
			return (i);
		}
	}
	return (0);
}
