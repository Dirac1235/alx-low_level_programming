#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Traverses the list to insert at nth node of
 * the linked list
 * @idx: the index of the node
 * @n: the data
 * @head: the list
 *
 * Return: The new nth node of the linked list
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *temp2;
	int i;

	if (*head == NULL)
		return (-1);

	for (i = 0; i < (index - 1) && temp; i++)
	{
		temp = temp->next;
	}
	temp->next = temp2;
	temp->next = temp->next->next;
	free(temp2);

	return (1);
}
