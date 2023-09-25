#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of the list
 * @head: root of the list
 * @n: element of the list
 * Return: pointer to the list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *curr;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (0);
	new->n = n;
	new->next = NULL;
	if (!*head)
		*head = new;
	else
	{
		curr = *head;
		while (curr->next)
			curr = curr->next;
		curr->next = new;
	}
	return (*head);
}
