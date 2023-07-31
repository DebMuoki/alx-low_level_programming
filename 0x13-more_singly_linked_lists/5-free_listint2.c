#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL.
 * @head: Double pointer to the head of the list to be freed.
 */
void free_listint2(listint_t **head)
{
	listint_t *c;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		c = *head;
		*head = (*head)->next;
		free(c);
	}
}

