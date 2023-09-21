#include "lists.h"
#include <string.h>

/**
 * add_node - adds node to the beginning of the list
 * @head: pointer to the head of the list
 * @str: element of the node
 * Return: pointer to new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int i = 0;

	new = malloc(sizeof(list_t));
	if (!new)
		return (0);
	new->str = strdup(str);
	while (str[i])
		i++;
	new->len = i;
	new->next = *head;
	*head = new;
	return (*head);
}
