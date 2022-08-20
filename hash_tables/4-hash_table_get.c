#include "hash_tables.h"

/**
 * hash_table_get - A function that retrieves a value associated with a key.
 * @ht: the hash table you want to look into
 * @key: the key you are looking for
 * Return: the value you search
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index, i;
	hash_node_t *temp;

	index = key_index((unsigned char *) key, ht->size);

	temp = ht->array[index];

	if (!ht)
		return (NULL);

	for (i = index ; ht->array[i] ; i++)
		if (strcmp(ht->array[i]->key, temp->key) == 0)
		{
			return (temp->value);
			temp = temp->next;
		}
	return (NULL);
}
