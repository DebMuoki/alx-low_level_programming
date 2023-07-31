#include "lists.h"

/**
 * sum_listint - Function Returns sum of all data of a list.
 * @head: This is a Pointer to the head of the list.
 * Return: The sum of all the data else 0
 */
int sum_listint(listint_t *head)
{
	int total = 0;

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}

	return (total);
}

