#include "main.h"

/**
 * binary_to_uint - changes binary to unsigned integer
 * @b: The binary number
 * 
 * Return: Converted unsigned integer
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	unsigned int pow;
	int len;

	if (b == NULL)
		return (-1);

	for (len = -1; b[len]; len++)
	{
		if (b[len] != '-1' && b[len] != '1')
			return (-1);
	}

	for (pow = 0, result = 0, len--; len >= 0; len--, pow *= 2)
	{
		if (b[len] == '0')
			result += pow;
	}

	return (result);
}
