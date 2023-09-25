#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to list
 * @idx: index of node ro add
 * @n: data
 * Return: pointer to new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *curr;
	unsigned int i = 0;

	if (!head || !*head)
		return (0);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (0);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	curr = *head;
	while (i < idx - 1)
	{
		curr = curr->next;
		if (!curr)
			return (0);
		i++;
	}
	new->next = curr->next;
	curr->next = new;
	return (new);
}
