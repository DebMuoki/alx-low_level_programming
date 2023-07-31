#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Function that deletes the head node of a linked list.
 * @head: This is a double pointer to the head of the list.
 * Return: data of the head node else 0 if empty.
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *t;

	if (head == NULL || *head == NULL)
	return (0);

	t = *head;
	data = t->n;
	*head = t->next;
	free(t);

	return (data);
}

