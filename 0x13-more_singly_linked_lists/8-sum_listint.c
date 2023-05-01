#include "lists.h"

/**
  * sum_listint - function calculates sum of all data(n) in a linked list
  * @head: this is a pointer to the head of the linked list
  * Return: Returns the sum of all data (n) in the linked list
  */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
