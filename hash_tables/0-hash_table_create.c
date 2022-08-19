#include "hash_tables.h"

/**
 * hash_table_create - A function that create a new hash table
 * @size: size of the array
 * Return: the adress of the new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_ht;
	hash_node_t **ar;
	unsigned long int i;

	new_ht = malloc(sizeof(hash_table_t));

	if (new_ht == NULL)
		return (NULL);

	ar = malloc(sizeof(hash_node_t) * size + 1);

	if (ar == NULL)
		return (NULL);

	for (i = 0 ; i < size ; i++)
	{
	new_ht->size = size;
	new_ht->array = ar;
	}

	return (new_ht);
}
