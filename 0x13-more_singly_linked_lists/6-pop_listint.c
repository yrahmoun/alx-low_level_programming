#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * and returns the head node’s data
 * @head: pointer to the list
 * Return: data
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *aux;

	if (!head || !*head)
		return (0);
	aux = *head;
	*head = (*head)->next;
	n = aux->n;
	free(aux);
	return (n);
}
