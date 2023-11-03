#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table.
 * @ht: hash table
 *
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node = NULL;
	unsigned long int j;
	int n = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (j = 0; j < ht->size; j++)
	{
		node = ht->array[j];
		if (node == NULL)
			continue;
		for (; node != NULL; node = node->next)
		{
			printf("%s'%s': '%s'", n == 0 ? "" : ", ",
					   node->key, node->value), n++;
				n++;
		}

	}
	printf("}\n");
}
