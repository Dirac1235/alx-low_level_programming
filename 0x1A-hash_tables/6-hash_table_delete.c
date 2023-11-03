#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table.
 * @ht: hash table to be deleted
*/
void hash_table_delete(hash_table_t *ht)
{
	int j;
	hash_node_t *holder = NULL;
	hash_node_t *node = NULL;

	if (ht == NULL)
		return;

	for (j = 0; j < ht->size; j++)
	{
		node = ht->array[j];
		if (node == NULL)
			continue;
		for (; node != NULL; node = node->next)
		{
			holder = node;
			node = holder->next;
			free(holder->key);
			free(holder->value);
			free(holder);
		}
		free(node);
	}
	free(ht);
}
