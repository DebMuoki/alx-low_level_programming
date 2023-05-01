#include "lists.h"

/**
  * reverse_listint - function reverses a linked list in place
  * @head: a pointer to the head node of the linked list
  * Return: a pointer to the new head node of the reversed list
  */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = NULL;
	listint_t *next_node = NULL;
	listint_t *current_node = *head;

	while (current_node != NULL)
	{
		next_node = current_node->next;
		current_node->next = prev_node;
		prev_node = current_node;
		current_node = next_node;
	}

	*head = prev_node;

	return (*head);
}
