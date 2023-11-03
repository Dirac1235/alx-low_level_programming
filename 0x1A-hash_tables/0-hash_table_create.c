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
	int i;

	if (size == 0)
		Return(NULL);
	table = (hash_table_t *) malloc(sizeof(hash_table_t));

	if (table == NULL)
		Return(NULL);

	table->size = size;
	table->count = 0;
	table->items = (H_items **) calloc(size, sizeof(H_items *));

	for (i = 0; i < table->size; i++)
		table->items[i] = NULL;

	return (table);
}
