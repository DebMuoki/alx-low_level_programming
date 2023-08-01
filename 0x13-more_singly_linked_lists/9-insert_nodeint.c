#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts new node at iven position in the list.
 * @head: The Pointer to the head of the list.
 * @idx: The Index where the new node should be added.
 * @n: The data to be stored in the new node.
 * Return: The address of the new node else NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *current;
	unsigned int index;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	current = *head;
	for (index = 0; index < idx - 1; index++)
	{
		if (current == NULL)
		{
			free(new);
			return (NULL);
		}
		current = current->next;
	}

	if (current == NULL)
	{
		free(new);
		return (NULL);
	}

	new->next = current->next;
	current->next = new;

	return (new);
}

