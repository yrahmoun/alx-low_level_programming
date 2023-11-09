#include "lists.h"

/**
 * dlistint_len - finds the number of nodes in a linked list
 * @h: pointer to list
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *curr = h;
	size_t num = 0;

	while (curr)
	{
		num++;
		curr = curr->next;
	}
	return (num);
}
