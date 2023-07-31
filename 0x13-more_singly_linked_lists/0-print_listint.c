#include <stdio.h>
#include "lists.h"

/**
 * print_listint - function prints all elements of a listint_t list.
 * @h: Pointer to head of the list.
 * Return: Returns umber of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	size_t index = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		index++;
	}

	return (index);
}

