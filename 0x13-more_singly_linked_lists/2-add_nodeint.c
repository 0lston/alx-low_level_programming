#include "lists.h"
/**
 * add_nodeint - Adds a new node at the beginning of a listint_t linked list.
 * @head: A pointer to a pointer to the head of the linked list.
 * @n: The integer value to be stored in the new node.
 *
 * This function creates a new node with the specified integer value 'n' and
 * adds it to the beginning of the linked list pointed to by '*head'.
 *
 * Return: If the function succeeds, it returns a pointer to the newly created
 * node. Otherwise, if memory allocation fails or 'head' is NULL, returns NULL.
 *
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!head || !new_node)
		return (NULL);

	new_node->next = NULL;
	new_node->n = n;

	if (*head)
		new_node->next = *head;
	*head = new_node;
	return (new_node);
}
