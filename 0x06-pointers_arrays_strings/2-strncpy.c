#include "main.h"
/**
 * _strncpy - copies the content of an array to another
 *
 * @dest: destination
 * @src: source
 * @n: how many will be copied
 *
 * Return: concatenated array
 */
char *_strncpy(char *dest, char *src, int n)
strncpy(char *dest, const char *src, size_t n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
