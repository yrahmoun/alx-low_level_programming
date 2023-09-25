#include "lists.h"

/**
 * print_listint - prints the elements of a linked list
 * @h: pointer to the list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;
	const listint_t *curr;

	curr = h;
	while (curr)
	{
		printf("%d\n", curr->n);
		num++;
		curr = curr->next;
	}
	return (num);
}
