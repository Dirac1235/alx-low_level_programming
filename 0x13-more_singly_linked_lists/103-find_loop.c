#include "lists.h"

/**
 * find_listint_loop - finds the loop occurence
 * @head: the list which may contain loop
 * Return: the location if loop occurs
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *node = head;
	listint_t *node_2 = head;

	if (!head)
		return (NULL);

	while (node && node_2 && node_2->next)
	{
		node_2 = node_2->next->next;
		node = node->next;
		if (node_2 == node)
		{
			node = head;
			while (node != node_2)
			{
				node = node->next;
				node_2 = node_2->next;
			}
			return (node_2);
		}
	}

	return (NULL);
}
