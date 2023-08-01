#include "lists.h"
/**
 * print_listint_safe - function that prints a linked list with a loop safely.
 * @head: pointer to the 1st node of the linked list
 * Return: new_node
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp = NULL;
	const listint_t *temp2 = NULL;
	size_t counter = 0;
	size_t new_n;

	temp = head;
	while (temp)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		counter++;
		temp = temp->next;
		temp2 = head;
		new_n = 0;
		while (new_n < counter)
		{
			if (temp == temp2)
			{
				printf("-> [%p] %d\n", (void *)temp, temp->n);
				return (counter);
			}
			temp2 = temp2->next;
			new_n++;
		}
		if (!head)
			exit(98);
	}
	return (counter);
}
