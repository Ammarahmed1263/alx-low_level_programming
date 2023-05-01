#include "lists.h"
/**
 * add_nodeint_end - add node to end of linked list
 * @head: the head pointer to the list
 * @n:data included in the node
 *
 * Return: on success pointer to list after modification
 * and on fail returns null
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *curr, *tmp;

	curr = malloc(sizeof(list_t));

	if (!curr)
		return (NULL);

	curr->n = n;
	curr->next = NULL;

	if (!(*head))
	{
		*head = curr;
		return (*head);
	}

	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = curr;

	return (curr);
}
