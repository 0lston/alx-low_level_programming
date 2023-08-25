#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints the elements of a singly linked list of strings.
 * @h: A pointer to the head of the linked list (list_t).
 *
 * Description:
 * - This function iterates through the linked list and prints each element
 *   along with its length.
 * - If an element is NULL, it prints "[0] (nil)".
 *
 * Return: The total number of nodes (elements) in the linked list.
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		nodes++;
	}

	return (nodes);
}


