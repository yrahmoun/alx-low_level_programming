#include "hash_tables.h"

/**
 * hash_table_delete - frees the hash table
 * @ht: pointer to the hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *aux;
	hash_node_t *node;
	unsigned long int i = 0;

	if (!ht || !ht->array)
		return;
	while (i < ht->size)
	{
		if (ht->array[i])
		{
			node = ht->array[i];
			while (node)
			{
				aux = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = aux;
			}
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
