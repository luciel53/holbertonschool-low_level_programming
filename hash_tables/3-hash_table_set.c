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
	unsigned long int index, i;
	hash_node_t *new_element;
	char *value_copy;

	/* if ht, key and *key are empty, return 0' */
	if (!ht || !key || *key == '\0')
		return (0);

	/* make a copy of value */
	value_copy = strdup(value);
	/* if value_copy is NULL, return 1 */
	if (value_copy == NULL)
		return (1);

	/* function that gives you the index of a key. */
	index = key_index((unsigned char *) key, ht->size);

	for (i = index ; ht->array[i] ; i++)
	{
		/* compares the key with the key of the array */
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			/* store the value in value_copy */
			free(ht->array[i]->value);
			ht->array[i]->value = value_copy;
			return (1);
		}
	}
	/*create and allocate new element */
	new_element = malloc(sizeof(hash_table_t));

	if (new_element == NULL)
		return (0);

	/*copy the key in the new_element */
	new_element->key = strdup(key);
	new_element->value = value_copy;
	new_element->next = ht->array[index];
	ht->array[index] = new_element;
	return (1);
}
