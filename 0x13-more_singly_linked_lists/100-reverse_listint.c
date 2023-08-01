#include "lists.h"

/**
 * reverse_listint - Function reverses a listint_t linked list.
 * @head: This is the double pointer to the head of the list.
 * Return: This is a pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevv_node = NULL;
	listint_t *current_node = *head;
	listint_t *nextt_node;

	while (current_node != NULL)
	{
		nextt_node = current_node->next;
		current_node->next = prevv_node;
		prevv_node = current_node;
		current_node = nextt_node;
	}

	*head = prevv_node;
	return (*head);
}

