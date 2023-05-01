#include "lists.h"

/**
  * delete_nodeint_at_index - function deletes node at index index
  * of a listint_t linked list
  * @head: a double pointer to the head of the listint_t linked list
  * @index: this is an index of the node to be deleted
  * Return: returns 1 if succeeded and -1 if failed
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	prev = *head;
	temp = prev->next;

	for (i = 1; temp != NULL && i < index; i++)
	{
		prev = temp;
		temp = temp->next;
	}

	if (temp == NULL)
		return (-1);

	prev->next = temp->next;
	free(temp);

	return (1);
}


