#include "lists.h"
#include <stddef.h>

/**
 * listint_len - Function returns the number of elements in a linked list.
 * @h: This is a Pointer to the head of the list.
 * Return: number of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t index = 0;

	while (h != NULL)
	{
		index++;
		h = h->next;
	}

	return (index);
}

