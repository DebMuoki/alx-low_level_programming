#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Function deletes the node at index index of a list
 * @head: This is a double pointer to the head of the list.
 * @index: This is the index of the node to be deleted.
 * Return: 1 on success else,-1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *c_node, *t_node;
	unsigned int k;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		t_node = *head;
		*head = (*head)->next;
		free(t_node);
		return (1);
	}

	c_node = *head;
	for (k = 0; k < index - 1; k++)
	{
		if (c_node->next == NULL)
			return (-1);
		c_node = c_node->next;
	}

	t_node = c_node->next;
	if (t_node == NULL)
		return (-1);

	c_node->next = t_node->next;
	free(t_node);
	return (1);
}

