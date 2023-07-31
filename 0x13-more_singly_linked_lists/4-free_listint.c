#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - This function frees a listint_t list.
 * @head: This is a pointer to the head of the list to be freed.
 * Return: return value is void
 */
void free_listint(listint_t *head)
{
	listint_t *t;

	while (head != NULL)
	{
		t = head;
		head = head->next;
		free(t);
	}
}

