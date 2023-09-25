#include "lists.h"

/**
 * listint_len - counts number of nodes in the linked list
 * @h: pointer to linked list
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;
	const listint_t *curr;

	curr = h;
	while (curr)
	{
		num++;
		curr = curr->next;
	}
	return (num);
}
