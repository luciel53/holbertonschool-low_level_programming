#include "hash_tables.h"

/**
 * key_index - A function that that gives the index of a key.
 * @key: the key
 * @size: size of the array
 * Return: the index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{

	return (hash_djb2(key) % size);
}
