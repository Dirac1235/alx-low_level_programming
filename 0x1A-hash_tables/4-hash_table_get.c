#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: hash table which we retrieve the value from
 * @key: the key which we find the value
 *
 * Return: NULL if ke not found else value associated with the key
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current_node = NULL;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (0);

	index = key_index((unsigned char *) key, ht->size);
	current_node = ht->array[index];

	if (current_node == NULL)
		return (NULL);

	for (; current_node != NULL; current_node = current_node->next)
	{
		if (strcmp(current_node->key, key) == 0)
			return (current_node->value);
	}
	return (NULL)
}
