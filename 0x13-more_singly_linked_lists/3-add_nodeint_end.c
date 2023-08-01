#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - It adds list at the end 
 * @head: The beginning of the list
 * @n: The data to be added
 *
 * Return: The address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));;
	listint_t * temp2 = *head;

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp2->next)
		temp2 = temp2->next;

	temp2->next = new;

	return (new);
}
