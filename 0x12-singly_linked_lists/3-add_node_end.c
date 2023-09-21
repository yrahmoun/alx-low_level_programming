#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds node to the end of the list
 * @head: pointer to the head of the list
 * @str: element of the node
 * Return: pointer to the head of the list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *curr;
	unsigned int i = 0;

	new = malloc(sizeof(list_t));
	if (!new)
		return (0);
	new->str = strdup(str);
	while (str[i])
		i++;
	new->len = i;
	new->next = NULL;
	if (!*head)
	{
		*head = new;
		return (*head);
	}
	curr = *head;
	while (curr->next)
		curr = curr->next;
	curr->next = new;
	return (*head);
}
