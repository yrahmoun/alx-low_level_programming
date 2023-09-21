#include "lists.h"

/**
 * list_len - counts nodes in a linked list
 * @h: pointer to list
 * Return: count
 */

size_t list_len(const list_t *h)
{
	const list_t *curr = h;
	size_t num = 0;

	while (curr)
	{
		num++;
		curr = curr->next;
	}
	return (num);
}
