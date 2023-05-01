#include "lists.h"

/**
  * free_listint - function that frees a listint_t list
  * @head: a pointer to the head of a listint_t list
  * Return: void
  */

void free_listint(listint_t *head)
{
	listint_t *current_node;

	while (head != NULL)
	{
		current_node = head;
		head = head->next;
		free(current_node);
	}
}
