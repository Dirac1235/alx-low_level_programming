#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}

	int wordCount = 0;
	int i = 0;
	int len = strlen(str);

	while (i < len)
	{
		while (i < len && str[i] == ' ')
		{
			i++;
		}
		if (i < len && str[i] != ' ')
		{
			wordCount++;
			while (i < len && str[i] != ' ')
			{
				i++;
			}
		}
	}

	char **words = (char **)malloc((wordCount + 1) * sizeof(char *));

	if (words == NULL)
	{
		return (NULL);
	}

	i = 0;
	int wordIndex = 0;

	while (i < len)
	{
		while (i < len && str[i] == ' ')
		{
			i++;
		}
		if (i < len && str[i] != ' ')
		{
			int start = i;

			while (i < len && str[i] != ' ')
			{
				i++;
			}
			int wordLength = i - start;

			words[wordIndex] = (char *)malloc((wordLength + 1) * sizeof(char));
			if (words[wordIndex] == NULL)
			{
				for (int j = 0; j < wordIndex; j++)
				{
					free(words[j]);
				}
				free(words);
				return (NULL);
			}
			strncpy(words[wordIndex], &str[start], wordLength);
			words[wordIndex][wordLength] = '\0';
			wordIndex++;
		}
	}

	words[wordIndex] = NULL;
	return (words);
}

