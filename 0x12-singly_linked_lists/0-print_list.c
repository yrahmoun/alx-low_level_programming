#include "lists.h"

/**
 * print_list - prints elements of the linked list
 * @h: pointer to the head of the list
 * Return: number of elements
 */

size_t print_list(const list_t *h)
{
	const list_t *curr;
	size_t num = 0;

	curr = h;
	while (curr)
	{
		if (!curr->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", curr->len, curr->str);
		num++;
		curr = curr->next;
	}
	return (num);
}
