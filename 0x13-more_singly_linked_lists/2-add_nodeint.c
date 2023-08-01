#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - It adds list at the beginning
 * @head: The beginning of the list
 * @n: The data to be added
 *
 * Return: The address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (!temp)
		return (NULL);

	temp->n = n;
	temp->next = *head;
	*head = temp;
	return (temp);
}
