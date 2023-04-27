#include "lists.h"
#include <stdio.h>

/**
 * print_list - function prints all the elements of a list_t list.
 * @h: a pointer to the head of the list
 *
 * Return: number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_t count = 0;

	while (current)
	{
	if (current->str)
	printf("[%u] %s\n", current->len, current->str);
	else
	printf("[0] (nil)\n");
	count++;
	current = current->next;
	}

	return (count);
}

