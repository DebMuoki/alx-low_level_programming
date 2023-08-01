#include "lists.h"

/**
 * reverse_listint - Function that reverses a listint_t linked list.
 * @head: This is a double pointer to the head of the list.
 * Return: Returns a pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = NULL;
	listint_t *next_node = NULL;

	while (*head)
	{
		next_node = (*head)->next;
		(*head)->next = prev_node;
		prev_node = *head;
		*head = next_node;
	}

	*head = prev_node;
	return (*head);
}

