#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Traverses the list to find the nth node of
 * the linked list
 * @index: the index of the node
 * @head: the list
 *
 * Return: The nth node of the linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i;

	for (i = 0; i < index && temp; i++)
	{
		temp = temp->next;
	}
	return (temp ? temp : NULL);
}
