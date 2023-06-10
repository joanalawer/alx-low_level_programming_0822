#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - Function adds new node at the begining of listint list.
 * @head: Pointer to node.
 * @n: Node data.
 * Return: Address of the new element, else NULL.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	/* Declare a new node for data */
	listint_t *newNode = malloc(sizeof(listint_t));

	newNode->n = n;

	/* Base case */
	if (newNode == NULL)
	{
		return (NULL);
	}

	/* Point new node to head */
	newNode->next = *head;

	*head = newNode;

	return (newNode);
}
