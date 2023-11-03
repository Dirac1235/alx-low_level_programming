#include "hash_tables.h"
/**
 * key_index - creates index from key given by the hash function
 * @size: size of the hash table to be created
 * @key: the value to be converted to an index
 *
 * Return: the index of given key
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	int hash_result;

	hash_result = hash_djb2(key);
	return (hash_result % size);
}
