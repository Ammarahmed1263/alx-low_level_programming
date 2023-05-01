#include "lists.h"
/**
 * listint_len - prints number of list elements
 * @h: pointer to list head node
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
