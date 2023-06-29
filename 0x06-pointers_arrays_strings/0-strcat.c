#include "main.h"
/**
 * _strcat - copies the content of an array to another
 *
 * @dest: destination
 * @src: source
 *
 * Return: concatenated array
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int count = 0;

	while (dest[i] != '\0')
		i++;
	while (src[count] != '\0')
	{
		dest[i + count] = src[count];
		count++;
	}
	dest[i + count] = '\0';
	return (dest);
}
