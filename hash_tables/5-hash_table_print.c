#include "hash_tables.h"

/**
 * hash_table_print - A function that prints a hash table.
 * @ht: the hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int comma;
	if (ht == NULL)
		return;

	printf("{");

	for (i = 0 ; i < ht->size ; i++)
	{
		while (ht->array[i] != NULL)
		{
			if (comma)
				printf(", ");
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			comma = 1;
			ht->array[i] = ht->array[i]->next;

		}
	}

	printf("}\n");

}
