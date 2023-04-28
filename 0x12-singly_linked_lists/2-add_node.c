#include "lists.h"
/**
 * add_node - add node to linked list
 * @head: the head pointer to the list
 * @str:data included in the node
 *
 * Return: on success pointer to list after modification
 * and on fail returns null
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *curr;

	curr = malloc(sizeof(list_t));

	if (!curr)
		return (NULL);

	curr->str = strdup(str);
	curr->len = strlen(str);
	curr->next = *head;
	*head = curr;

	return (*head);
}
