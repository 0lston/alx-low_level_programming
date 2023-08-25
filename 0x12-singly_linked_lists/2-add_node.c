#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a linked list.
 *
 * @head: A pointer to a pointer to the head of the linked list.
 * @str: The string to be stored in the new node.
 *
 * Return: A pointer to the newly created node, or NULL on failure.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *dup;
	int len = 0;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	dup = strdup(str);
	if (!dup)
	{
		free(new_node);
		return (NULL);
	}

	while (dup[len])
		len++;

	new_node->str = dup;
	new_node->len = len;
	new_node->next = *head;

	*head = new_node;
	return (new_node);
}
