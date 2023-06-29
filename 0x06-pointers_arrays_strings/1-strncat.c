#include "main.h"
/**
 * _strncat - copies the content of an array to another
 *
 * @dest: destination
 * @src: source
 * @n: how many will be copied
 *
 * Return: concatenated array
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int count = 0;

	while (dest[i] != '\0')
		i++;
	while (count < n && src[count] != '\0')
	{
		dest[i + count] = src[count];
		count++;
	}
	dest[i + count] = '\0';
	return (dest);
}
