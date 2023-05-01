#include "lists.h"

/**
  * pop_listint - function deletes head node of a listint_t linked list
  * and returns head node's data (n)
  * @head: this is a pointer to a pointer to
  * the head node of the listint_t linked list
  * Return: returns the head node's data (n), or if the linked list is empty
  */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	data = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (data);
}
