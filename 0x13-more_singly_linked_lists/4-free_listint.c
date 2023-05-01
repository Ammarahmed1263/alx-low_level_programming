#include "lists.h"
/**
 * free_listint - frees linked list
 * @head: pointer to the list
 *
 */
void free_listint(listint_t *head)
{
	if (!head)
		return;

	free_listint(head->next);
	free(head);

}
