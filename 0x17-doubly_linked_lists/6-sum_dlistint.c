#include "lists.h"

/**
 * sum_dlistint - finds the sum of all the data n in a list
 * @head: pointer to the list
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *curr = head;

	while (curr)
	{
		sum += curr->n;
		curr = curr->next;
	}
	return (sum);
}
