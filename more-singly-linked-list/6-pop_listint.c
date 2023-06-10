#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Function deletes head of a node
 * of a listint_t list.
 * @head: Pointer to node.
 * Return: Head node's data; 0 if list is empty.
 */

int pop_listint(listint_t **head)
{
	listint_t *headNode;
	int data;

	headNode = *head;

	/* Base case */
	if (*head == NULL)
	{
		return (-1);
	}

	data = headNode->n;

	*head = (*head)->next;

	/* Free head node */
	free(headNode);

	return (data);
}
