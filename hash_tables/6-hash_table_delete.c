#include "hash_tables.h"


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
	free (ht);
}
