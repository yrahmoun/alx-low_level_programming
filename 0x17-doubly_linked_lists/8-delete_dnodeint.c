#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at certain index
 * @head: pointer to the head of the list
 * @index: index of the node to delete
 * Return: 1 or -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr = *head;
	unsigned int count = 0;

	if (!head)
		return (-1);
	while (curr)
	{
		if (index == 0)
		{
			*head = curr->next;
			if (curr->next)
				curr->next->prev = NULL;
			free(curr);
			return (1);
		}
		if (count + 1 == index - 1 && !curr->next)
		{
			free(curr->next);
			curr->next = NULL;
			return (1);
		}
		if (count + 1 == index - 1)
		{
			curr->next = curr->next->next;
			curr->next->prev = curr;
			free(curr->next);
			return (1);
		}
		count++;
		curr = curr->next;
	}
	return (-1);
}
