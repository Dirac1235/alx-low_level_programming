#include "hash_tables.h"

/**
 * hash_table_create - it creates hash table
 * @size: the size of the hash table
 *
 * Return: hash table with the given size
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;

	if (size == 0)
		return (NULL);

	table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);

	if (table->array == NULL)
		return (NULL);

	return (table);
}
