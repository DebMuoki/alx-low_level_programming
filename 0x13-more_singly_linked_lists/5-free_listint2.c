#include "lists.h"

/**
  * free_listint - frees a listint_t list and sets the head to null
  * @head: a pointer to a pointer to the head of the listint_t list
  * Function iterates through linked list,
  * freeing each node and setting the head to NULL
  * ance all nodes have been freed.
  */

void free_listint2(listint_t **head)
{
	listint_t *current_node;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		current_node = *head;
		*head = (*head)->next;
		free(current_node);
	}
}
