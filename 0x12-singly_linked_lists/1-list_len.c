#include "lists.h"

/**
 * list_len - it returns the number of elements in a linked list_t list.
 * @h: this is a pointer to the head of the list_t list.
 *
 * Return: returns number of nodes in the list_t list.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
	count++;
	h = h->next;
	}

	return (count);
}

