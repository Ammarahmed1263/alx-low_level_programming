#include "lists.h"
/**
 * add_nodeint - add node to linked list
 * @head: the head pointer to the list
 * @n:data included in the node
 *
 * Return: on success pointer to list after modification
 * and on fail returns null
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
        listint_t *curr;

        curr = malloc(sizeof(listint_t));

        if (!curr)
                return (NULL);

        curr->n = n;
        curr->next = *head;
        *head = curr;

	return (*head);
}
