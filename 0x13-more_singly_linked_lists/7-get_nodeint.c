#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a linked list.
 * @head: This is Pointer to the head of the list.
 * @index: This is Index of the node to retrieve
 * Return: Pointer to the nth node else NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int ptr = 0;
	listint_t *k = head;

	while (k != NULL)
	{
		if (ptr == index)
			return (k);

		k = k->next;
		ptr++;
	}
	return (NULL);
}

