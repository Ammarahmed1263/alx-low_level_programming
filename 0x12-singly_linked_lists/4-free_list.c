#include "lists.h"
/**
 * free_list - frees linked list
 * @head: pointer to the list
 *
 */
void free_list(list_t *head)
{
	if (!head)
		return;

	free_list(head->next);
	free(head);

}
