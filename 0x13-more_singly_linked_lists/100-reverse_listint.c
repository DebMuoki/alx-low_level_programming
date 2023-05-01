#include "lists.h"

/**
  * reverse_listint - function reverses a linked list in place
  * @head: the pointer to the head node of the linked list
  * Return: the pointer to the new head node of the reversed list
  */

listint_t *reverse_listint(listint_t **head)
{

	listint_t *prev = NULL, *next = NULL, *current = *head;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
	return (*head);
}
