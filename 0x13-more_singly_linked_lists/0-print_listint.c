#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - Prints all elements of a listint_t linked list.
 * @h: A pointer to the head of the linked list.
 *
 * This function traverses the linked list pointed to by 'h' and prints the
 * integer data in each node.
 *
 * Return: The number of elements in the linked list.
 */

size_t print_listint(const listint_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		elements++;
	}
	return (elements);
}
