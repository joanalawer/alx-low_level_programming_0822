#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Function returns the nth node of a linked list.
 * @head: Pointer to node.
 * @index: Index of nth node.
 * Return: NuLL if node doesn't exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	/* Declare node for head */

