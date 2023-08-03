#include "main.h"

/**
 * binary_to_uint - changes binary to unsigned int
 * @b: pointer to the string containing the binary numbers
 *
 * Return: unsigned int for the correct input or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	unsigned int pow;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	for (pow = 1, result = 0, len--; len >= 0; len--, pow *= 2)
	{
		if (b[len] == '1')
			result += pow;
	}

	return (result);
}
