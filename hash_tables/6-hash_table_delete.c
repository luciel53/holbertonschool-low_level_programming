#include "hash_tables.h"

/**
 * hash_table_delete - A function that deletes a hash table.
 * @ht: the hash table to delete
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *element;
	unsigned long int i;

	if (!ht)
		return;

	for (i = 0 ; i < ht->size ; i++)
	{
		while (ht->array[i])
		{
			element = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = element;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
