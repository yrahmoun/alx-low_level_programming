#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at given index
 * @head: pointer to list
 * @index: index
 * Return: 1 or -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr, *aux;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);
	if (index == 0)
	{
		curr = (*head)->next;
		free(*head);
		*head = curr;
		return (1);
	}
	curr = *head;
	while (i < index - 1)
	{
		curr = curr->next;
		if (!curr)
			return (-1);
		i++;
	}
	aux = curr->next;
	curr->next = aux->next;
	free(aux);
	return (1);
}
