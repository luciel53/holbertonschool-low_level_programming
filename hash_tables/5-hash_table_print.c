#include "hash_tables.h"

/**
 * hash_table_print - A function that prints a hash table.
 * @ht: the hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;

	if (ht == NULL)
		return;

	printf("{");

	for (i = 0 ; i < ht->size ; i++)
	{
		while (ht->array[i] != NULL)
		{
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			printf(","),
			ht->array[i] = ht->array[i]->next;
		}
	}

	printf("}\n");

}
