#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Function frees a listint_t list safely.
 * @h: This is a double pointer to the head of the listint_t list.
 * Return: Theis is the size of the list that was free'd.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nodes, index;
	listint_t *current, *next;

	nodes = looped_listint_len(*h);

	if (nodes == 0)
	{
		current = *h;
		while (current != NULL)
		{
			next = current->next;
			free(current);
			current = next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			current = *h;
			*h = current->next;
			free(current);
		}

		*h = NULL;
	}

	return (nodes);
}

