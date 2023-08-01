#include "lists.h"

/**
 * find_listint_loop - Function that finds the loop in a linked list.
 * @head: This is a pointer to the head of the list.
 * Return: address of the node where the loop starts,or NULLif there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow_PTR = head, *fast_PTR = head;

	while (slow_PTR && fast_PTR && fast_PTR->next)
	{
		slow_PTR = slow_PTR->next;
		fast_PTR = fast_PTR->next->next;

		if (slow_PTR == fast_PTR)
		{
			slow_PTR = head;


			while (slow_PTR != fast_PTR)
			{
				slow_PTR = slow_PTR->next;
				fast_PTR = fast_PTR->next;
			}


			return (slow_PTR);
		}
	}
	return (NULL);
}

