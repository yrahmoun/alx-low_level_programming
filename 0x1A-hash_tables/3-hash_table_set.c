#include "hash_tables.h"

/**
 * add_node - adds node
 * @key: new key
 * @value: value of the new key
 * Return: pointer to new node
 */

hash_node_t *add_node(const char *key, const char *value)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (NULL);
	new->key = strdup(key);
	if (!new->key)
	{
		free(new);
		return (NULL);
	}
	new->value = strdup(value);
	if (!new->value)
	{
		free(new->key);
		free(new);
		return (NULL);
	}
	new->next = NULL;
	return (new);
}

/**
 * hash_table_set - add or change key value in the hash table
 * @ht: pointer hash table
 * @key: key to add or change
 * @value: new value
 * Return: 1 or 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *new_value;
	unsigned long int i;
	unsigned long int index;
	hash_node_t *new_node;

	if (!ht || !key || !*key || !value)
		return (0);
	new_value = strdup(value);
	if (!new_value)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	i = index;
	while (ht->array[i])
	{
		if (!strcmp(ht->array[i]->key, key))
		{
			free(ht->array[i]->value);
			ht->array[i]->value = new_value;
			return (1);
		}
		i++;
	}
	new_node = add_node(key, value);
	if (!new_node)
		return (0);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}

