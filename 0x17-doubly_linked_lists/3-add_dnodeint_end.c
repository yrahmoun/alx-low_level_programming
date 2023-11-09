#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end of the list
 * @head: pointer to the head of the list
 * @n: value
 * Return: pointer to new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *curr;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (0);
	new->n = n;
	if (!*head)
	{
		new->next = NULL;
		new->prev = NULL;
		*head = new;
		return (new);
	}
	curr = *head;
	while (curr->next)
		curr = curr->next;
	new->next = NULL;
	new->prev = curr;
	curr->next = new;
	return (new);
}
