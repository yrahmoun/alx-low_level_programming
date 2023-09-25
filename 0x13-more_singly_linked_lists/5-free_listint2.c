#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to the list
 */

void free_listint2(listint_t **head)
{
	listint_t *curr;
	listint_t *aux;

	if (!*head)
		return;
	curr = *head;
	while (curr)
	{
		aux = curr->next;
		free(curr);
		curr = aux;
	}
	*head = NULL;
}
