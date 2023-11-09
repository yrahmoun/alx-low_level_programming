#include "lists.h"

/**
 * add_dnodeint - adds a node at the beginning of the list
 * @head: pointer to the head of the list
 * @n: value
 * Return: pointer of the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
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
	new->next = *head;
	new->prev = NULL;
	new->next->prev = new;
	*head = new;
	return (new);
}
