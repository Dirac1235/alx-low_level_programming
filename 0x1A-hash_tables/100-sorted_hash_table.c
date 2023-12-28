#include "hash_tables.h"
/**
 * shash_table_create - creates hash table with given size
 * @size: the length of the hash table
 *
 * Return: hash table with given size
*/
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *shashtable;

	shashtable->size = size;
	shashtable->array = malloc(sizeof(shash_node_t) * size);
	if (!shashtable->array)
		return (NULL);

	return (shashtable);
}

/**
 * shash_table_set - sets the hash table with given data
 * @ht: hashtable
 * @key: the key that is converted to index
 * @value: the data associated with the key
 *
 * Return: 1 if success else 0
*/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *snode = NULL;
	shash_node_t *hnode = NULL;
	shash_node_t *hnode2 = NULL;
	int index;
	int i;

	index = key_index(key, ht->size);
	hnode = ht->array[index];

	for (; hnode != NULL; hnode = hnode->next)
	{
		if (strcomp(hnode->value, value) == 0)
		{
			free(hnode->value);
			hnode->value = strdup(value);
			hnode2 = ht->array[index];
			for (; hnode2 != 0; hnode2 = hnode2->snext)
			{
				if (strcomp(value, hnode2->value) > 0)
				{
					hnode->sprev->snext = hnode->snext;
					hnode->snext->sprev = hnode->sprev;
					hnode->sprev = hnode2->sprev;
					hnode->snext = hnode2->sprev->snext;
					hnode2->sprev = hnode;
				}
			}

		}
	}
	snode = c_snode(key, value);
	if (snode == NULL)
		return (0);

	snode->next = ht->array[index];
	ht->array[index] = snode;

	pl_right(ht, snode, index);
	f_head_tail(ht);
	return (1);
}
/**
 * f_head_tail - finds the head pointer and the tail pointer of the hash table
 * @ht: hashtable
 *
*/
f_head_tail(shash_table_t *ht)
{
	int i;

	ht->shead = ht->array[0];
	ht->stail = ht->array[0];

	for (i = 0; i <= ht->size; i++)
	{
		if (sttcmp(ht->array[i]->value, ht->stail->value) > 0)
			ht->stail = ht->array[i];

		else if (sttcmp(ht->array[i]->value, ht->shead->value) < 0)
			ht->shead = ht->array[i];
	}
}
/**
 * pl_right - sorts the hash table
 * @ht: hashtable
 * @node: the node that will be placed at the right place
 * @index: index of the linked list in the hash table
*/
void pl_right(shash_table_t *ht, shash_node_t *node, unsigned long int index)
{
	shash_node_t *hnode = NULL;

	hnode = ht->array[index];
	for (; hnode != 0; hnode = hnode->snext)
	{
		if (strcomp(node->value, hnode->value) > 0)
		{
			node->sprev = hnode->sprev;
			node->snext = hnode->sprev->snext;
			hnode->sprev = node;
		}
	}
}
/**
 * c_snode - function that creates a new_node node.
 * @key: pointer to key.
 * @value: pointer to value of the key.
 *
 * Return: pointer to new node else NULL.
 */
shash_node_t *c_snode(const char *key, const char *value)
{
	shash_node_t *node;

	if (key == NULL || strcmp(key, "") == 0 || value == NULL)
		return (NULL);

	node = malloc(sizeof(shash_node_t));

	if (node == NULL)
		return (NULL);

	node->key = strdup(key);

	if (node->key == NULL)
	{
		free(node);
		return (NULL);
	}

	node->value = strdup(value);

	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (NULL);
	}

	node->next = NULL;
	return (node);

}
/**
 * shash_table_get - retrieves a value associated with a key.
 * @ht: hash table which we retrieve the value from
 * @key: the key which we find the value
 *
 * Return: NULL if ke not found else value associated with the key
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *current_node = NULL;

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
	return (NULL);
}

/**
 * shash_table_print - prints a hash table.
 * @ht: hash table
 *
*/
void shash_table_print(const hash_table_t *ht)
{
	shash_node_t *node = NULL;
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