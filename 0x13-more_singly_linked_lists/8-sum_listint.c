#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - function that sums all elements of
 * given singly linked list
 * @head: the singly linked list
 *
 * Return: the sum of all the data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	listint_t *temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
