#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - Function that Frees a list_t list.
 * @head: This is a pointer to the head of the list.
 * Return: the return value is Void
 */

void free_list(list_t *head)
{
	list_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node->str);
		free(node);
	}
}

