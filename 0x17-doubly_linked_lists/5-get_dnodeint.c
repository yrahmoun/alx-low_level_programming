#include "lists.h"

/**
 * get_dnodeint_at_index - gets a node at a certain index
 * @head: pointer to the head of the list
 * @index: index of the node to get
 * Return: pointer to node or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curr = head;
	unsigned int count = 0;

	while (curr)
	{
		if (count == index)
			return (curr);
		count++;
		curr = curr->next;
	}
	return (0);
}
