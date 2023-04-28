#include "lists.h"
/**
 * add_node_end - add node to end of linked list
 * @head: the head pointer to the list
 * @str:data included in the node
 *
 * Return: on success pointer to list after modification
 * and on fail returns null
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *curr, *tmp;

	curr = malloc(sizeof(list_t));
	
	if (!curr)
		return (NULL);

	curr->str = strdup(str);
        curr->len = strlen(str);
	
	if (*head != NULL)
		for (tmp = *head; tmp->next; tmp = tmp->next);
	else
	{
		curr->next = NULL;
		*head = curr;
	}
	
	curr->next = tmp->next;
	tmp->next = curr;

	return (curr);
}
