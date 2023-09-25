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
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	curr = *head;
	while (curr)
	{
		if (i + 1 == idx)
		{
			new->next = curr->next;
			curr->next = new;
		}
		curr = curr->next;
		i++;
	}
	if (i < idx)
		return (0);
	return (new);
}
