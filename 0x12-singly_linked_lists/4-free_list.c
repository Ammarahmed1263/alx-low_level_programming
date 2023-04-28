#include "lists.h"
/**
 * ffree_list - frees linked list
 * @head: pointer to the list
 *
 */
void free_list(list_t *head)
{
	list_t *trav;

	if (!head)
		return;

	trav = head;
	free(trav);
	head = head->next;

	free_list(head);
}
