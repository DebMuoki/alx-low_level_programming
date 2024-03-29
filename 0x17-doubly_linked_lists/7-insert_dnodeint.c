#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Function that Inserts new node at given position.
 * @h: this is a  Pointer to a pointer to the head of the list
 * @idx: This is the index at which the new node should be added
 * @n: The value to be stored in the new node
 * Return: This is the address of the new node,else
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int i = 0;

	if (h == NULL)
	return (NULL);

	if (idx == 0)
	return (add_dnodeint(h, n));

	current = *h;
	while (current != NULL)
	{
	if (i == idx - 1)
	{
		new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)
		return (NULL);

		new_node->n = n;
		new_node->next = current->next;
		new_node->prev = current;
		if (current->next != NULL)
		current->next->prev = new_node;
		current->next = new_node;

		return (new_node);
	}

	current = current->next;
	i++;
	}

	return (NULL);
}

