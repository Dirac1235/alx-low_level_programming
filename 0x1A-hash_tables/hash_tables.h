#ifndef HASH_TABLE
#define HASH_TABLE

#include <stdio.h>
#include <stdlib.h>

/**
 * struct H_items - items of the hash table
 *
 * @key: the key of the value
 * @value: the data;
 *
*/
typedef struct H_items
{
	char *key;
	char *value;
} H_items;

/**
 * struct hash_table_t - Hash table data structure
 *
 * @size: The size of the array
 * @count: The count of created filled
 * @items: the items that are stored in the hash table
 *
 */

typedef struct hash_table_t
{
	H_items **items;
	int size;
	int count;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);
#endif	/* HASH_TABLE */
