#include "lists.h"

/**
 * free_list - frees the linked list
 * @head: pointer to the root of the list
 */

void free_list(list_t *head)
{
	list_t *curr;

	while (head)
	{
		curr = head->next;
		free(head->str);
		free(head);
		head = curr;
	}
}
