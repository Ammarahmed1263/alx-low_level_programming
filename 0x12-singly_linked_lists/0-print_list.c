#include "lists.h"
/**
 * print_list - prints all list elements
 * @h: pointer to the list
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	while (h)
	{
		count++;

		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", h->len, h->str);

		h = h->next;
	}

	return (count);
}
