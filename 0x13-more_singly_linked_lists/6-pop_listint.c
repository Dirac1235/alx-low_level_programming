#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - It removes list at the beginning
 * @head: The beginning of the list
 *
 * Return: The data of the removed node
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp = *head;
	
	if (!head || !*head)
		return (0);

	data = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (data);
}
