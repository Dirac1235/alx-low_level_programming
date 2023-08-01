#include <stdio.h>
#include "lists.h"

/**
 * listint_len - function that counts all elements of
 * given singly linked list
 * @h: the singly linked list
 *
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
