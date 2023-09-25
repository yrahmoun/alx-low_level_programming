#include "lists.h"

/**
 * get_nodeint_at_index - gets node at certain index
 * @head: pointer to node
 * @index: index
 * Return: node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
	{
		if (!head)
			return (0);
		head = head->next;
		i++;
	}
	return (head);
}
