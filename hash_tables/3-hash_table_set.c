#include "hash_tables.h"

/**
 * hash_table_set - A function that adds an element to the hash table.
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key
 * @value: the value associated with the key
 * Return: 1 if succeed, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_element;
	char *value_copy;

	if (!ht || !key || *key == '\0')
		return (0);

	value_copy = strdup(value);

	if (value_copy == NULL)
		return (1);

	index = key_index((unsigned char *) key, ht->size);

	for (index = 0 ; ht->array[index] ; index++)
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			value_copy = ht->array[index]->value;
			return (1);
		}
	}
	new_element = malloc(sizeof(hash_table_t));

	if (new_element == NULL)
		return (0);

	new_element->key = strdup(key);
	new_element->value = value_copy;
	new_element->next = ht->array[index];
	ht->array[index] = new_element;


	return (1);
}
