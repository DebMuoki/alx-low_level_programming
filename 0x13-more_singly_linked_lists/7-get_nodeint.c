#include "lists.h"

/**
  * get_nodeint_at_index - it returns the nth node of listint_t linked list
  * @head: a pointer to the head node of the linked list
  * @index: an index of the node to be returned, starting from 0
  * Return: a pointer to the nth node, or NULL if the node doen't exist
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		if (count == index)
			return (current);

		count++;
		current = current->next
	}

	return (NULL);
}
