#include "lists.h"

/**
 * add_nodeint - adds a node to the beginning
 * of the linked list
 * @head: root of the linked list
 * @n: node element
 * Return: pointer to the root of the linked list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (0);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
