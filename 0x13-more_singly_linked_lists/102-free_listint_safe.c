#include "lists.h"

/**
 * free_listint_safe - frees a linked list safe way
 * @h: pointer to the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	int dif;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		dif = *h - (*h)->next;
		if (dif > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			count++;
		}
		else
		{
			free(*h);
			*h = NULL;
			count++;
			break;
		}
	}

	*h = NULL;

	return (count);
}
