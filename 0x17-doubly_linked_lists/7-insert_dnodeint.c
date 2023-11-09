#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at certain index
 * @h: pointer to list
 * @idx: index of node to insert
 * @n: value
 * Return: pointer to node or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *new;
	dlistint_t *curr;

	new = malloc(sizeof(dlistint_t));
	if (!new || !h)
		return (0);
	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	curr = *h;
	while (curr)
	{
		if (count == idx - 1 && !curr->next)
		{
			add_dnodeint_end(h, n);
			return (new);
		}
		if (count == idx - 1)
		{
			new->n = n;
			new->prev = curr;
			new->next = curr->next;
			new->next->prev = new;
			curr->next = new;
			return (new);
		}
		count++;
		curr = curr->next;
	}
	free(new);
	return (0);
}

