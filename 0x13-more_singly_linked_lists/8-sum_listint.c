#include "lists.h"

/**
 * sum_listint - sums data of all nodes in the list
 * @head: pointer to the list
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
