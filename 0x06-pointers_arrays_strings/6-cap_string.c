#include "main.h"
/**
 * cap_string - capitalizes words that come,
 * after special character
 *
 * @c: the string to be capitalized
 * Return: the capitalized string
 */
char *cap_string(char *c)
{
	int count = 0;
	char a;

	while (c[count] != '\0')
	{
		if (count == 0 && c[count] >= 'a' && s[count] <= 'z')
			c[count] -= 32;

		if (c[count] >= 'a' && c[count] <= 'z')
		{
			if (c[count - 1] == ',' || c[count - 1] == ';' || c[count - 1] == '.')
			{
				a = (char) (c[count] - 32);
				c[count] = a;
			}
			else if (c[count - 1] == '!' || c[count - 1] == '?' || c[count - 1] == '\"')
			{
				a = (char) (c[count] - 32);
				c[count] = a;
			}
			else if (c[count - 1] == '(' || c[count - 1] == ')' || c[count - 1] == '{')
			{
				a = (char) (c[count] - 32);
				c[count] = a;
			}
			else if (c[count - 1] == '}' || c[count - 1] == '\t')
			{
				a = (char) (c[count] - 32);
				c[count] = a;
			}
			else if (c[count - 1] == ' ' || c[count - 1] == '\n')
			{
				a = (char) (c[count] - 32);
				c[count] = a;
			}
		}
		count++;
	}
	return (c);
}
