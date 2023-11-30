#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: pointer to hash table
 * @key: key to get value from
 * Return: value ot NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	if (!ht || !key || !*key)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	while (ht->array[index])
	{
		if (!strcmp(ht->array[index]->key, key))
			return (ht->array[index]->value);
		index++;
	}
	return (0);
}
