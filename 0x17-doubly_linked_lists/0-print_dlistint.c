#include "lists.h"

/**
 * print_dlistint - prints elements of linked list
 * @h: pointer to list
 * Return: number of elements
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *curr = h;
	size_t num = 0;

	while (curr)
	{
		printf("%d\n", curr->n);
		curr = curr->next;
		num++;
	}
	return (num);
}
