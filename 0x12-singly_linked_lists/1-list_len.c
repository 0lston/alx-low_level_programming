#include "lists.h"

/**
 * list_len - Counts the number of nodes (elements) in a linked list.
 * @h: A pointer to the head of the linked list (list_t).
 *
 * Description:
 * - This function iterates through the linked list and counts the number of
 *   nodes (elements) it contains.
 *
 * Return: The total number of nodes (elements) in the linked list.
 */

size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}

	return (nodes);
}
