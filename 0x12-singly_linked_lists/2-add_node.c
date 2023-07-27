#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Function that adds new node at beginning of a list_t list.
 * @head: Pointer to a pointer that points to head of the list.
 * @str: string to be added to the new node.
 * Return: address of the new element, else NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *added_node;

	if (str == NULL)
		return (NULL);

	added_node = malloc(sizeof(list_t));

	if (added_node == NULL)
		return (NULL);

	added_node->str = strdup(str);
	if (added_node->str == NULL)
	{
		free(added_node);
		return (NULL);
	}

	added_node->len = strlen(str);
	added_node->next = *head;
	*head = added_node;

	return (added_node);
}

