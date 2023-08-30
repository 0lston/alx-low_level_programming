#include "lists.h"
/**
 * listint_len - Counts the number of elements in a listint_t linked list.
 * @h: A pointer to the head of the linked list.
 *
 * This function traverses the linked list pointed to by 'h' and counts the
 * number of elements it contains.
 *
 * Return: The number of elements in the linked list.
 */
size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
