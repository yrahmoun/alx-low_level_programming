#include "hash_tables.h"

/**
 * hash_table_print - prints the hash table
 * @ht: pointer to the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i = 0;
	int count = 0;

	if (ht == NULL)
		return;
	printf("{");
	while (i < ht->size)
	{
		node = ht->array[i];
		while (node)
		{
			if (count != 0)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			count = 1;
			node = node->next;
		}
		i++;
	}
	printf("}\n");
}
