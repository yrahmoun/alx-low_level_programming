#include "hash_tables.h"

/**
 * hash_table_delete - frees the hash table
 * @ht: pointer to the hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *aux;

	while (i < ht->size)
	{
		while (ht->array[i] != NULL)
		{
			aux = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = aux;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
