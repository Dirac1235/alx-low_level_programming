#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Traverses the list to insert at nth node of
 * the linked list
 * @idx: the index of the node
 * @n: the data
 * @head: the list
 *
 * Return: The new nth node of the linked list
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	listint_t *new;
	unsigned int i;

	new = malloc(sizeof(listint_t));

	if (!new || !head)
		return (NULL);
	new->n = n;

	for (i = 0; i < (idx - 1) && temp; i++)
	{
		temp = temp->next;
	}
	new->next = temp->next;
	temp->next = new;

	return (new);
}
