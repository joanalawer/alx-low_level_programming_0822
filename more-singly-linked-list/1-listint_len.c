#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - Function returns number of elementsin a listint_t list.
 * @h: Pointer head.
 * Return: The number of elements.
 */

size_t listint_len(const listint_t *h)
{
	/* initialize counter for nodes */
	size_t node_count = 0;

	/* check if node not pointing to NULL */
	while (h != NULL)
	{
		node_count++;
		h = h->next;
	}

	return (node_count);
}
