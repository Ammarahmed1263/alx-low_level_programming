#include "lists.h"
/**
 * free_listint2 - frees linked list
 * @head: pointer to the list
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *trav;

	while (*head)
	{
		trav = *head;
		*head = (*head)->next;
		free(trav);
	}

	head = NULL;
}
