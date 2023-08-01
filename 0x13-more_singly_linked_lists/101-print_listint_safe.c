#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Function counts number of unique nodes in list
 * @head: pointer to head of the listint_t to check.
 * Return: If the list is not looped - 0 else number of unique nodes
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *slow_ptr, *fast_ptr;
	size_t n = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	slow_ptr = head->next;
	fast_ptr = (head->next)->next;

	while (fast_ptr)
	{
		if (slow_ptr == fast_ptr)
		{
			slow_ptr = head;
			while (slow_ptr != fast_ptr)
			{
				n++;
				slow_ptr = slow_ptr->next;
				fast_ptr = fast_ptr->next;
			}

			slow_ptr = slow_ptr->next;
			while (slow_ptr != fast_ptr)
			{
				n++;
				slow_ptr = slow_ptr->next;
			}

			return (n);
		}

		slow_ptr = slow_ptr->next;
		fast_ptr = (fast_ptr->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Function that prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t n, i = 0;

	n = looped_listint_len(head);

	if (n == 0)
	{
		while (head != NULL)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			n++;
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (n);
}

