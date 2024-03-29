#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Function adds new node at the end of a list.
 * @head: Pointer to a pointer that points to head of list.
 * @n: integer value to be added to the new node.
 * Return: address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		temp = temp->next;
		temp->next = new;
	}

	return (new);
}

