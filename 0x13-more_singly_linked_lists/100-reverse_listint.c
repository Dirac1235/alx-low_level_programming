#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - it reverses given list
 * @head: the linked list to be reversed
 *
 * Return: the reversed linked list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
