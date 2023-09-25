#include "lists.h"

/**
 * free_listint - frees the linked list
 * @head: pointer to the head of the list
 */

void free_listint(listint_t *head)
{
	listint_t *aux;

	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
