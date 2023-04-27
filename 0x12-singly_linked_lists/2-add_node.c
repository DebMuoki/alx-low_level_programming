#include "lists.h"
size_t _strlen(char *s);

/**
 * add_node - function adds new node at the beginning of a list_t list.
 * @head: A pointer to the head of the list.
 * @str: A string to be added to the list.
 *
 * Return: Address of the new element or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL || str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = _strlen(new_node->str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

/**
 * _strlen - function returns the length of a string.
 * @s: a pointer to the string.
 *
 * Return: returns Length of the string.
 */
size_t _strlen(char *s)
{
	size_t len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}

