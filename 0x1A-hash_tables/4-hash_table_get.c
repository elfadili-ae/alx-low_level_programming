#include "hash_tables.h"

/**
 * hash_table_get - get the value associated with the key
 * @ht: hash table
 * @key: key of the element
 * Return: value (success) | NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	if (ht == NULL || ht->size == 0 || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] != NULL)
		return (ht->array[index]->value);

	return (NULL);
}
