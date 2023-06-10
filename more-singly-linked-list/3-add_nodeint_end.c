#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - Function adds a new node at the end of listint list.
 * @head: Pointer to node.
 * @n:Node data.
 * Return: Address of the new element, else NULL.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/* Declare a new node to add at end*/
	listint_t *newNode = malloc(sizeof(listint_t));

	/* Assign data to node */
	newNode->n = n;

	/* Point new node to NULL to indicate last node */
	newNode->next = NULL;

	/* Check for nodes in list; if it's an empty list */
	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		/* Declare a temporal pointer to traverse*/
		listint_t *temp = malloc(sizeof(listint_t));

		/*Iterate list to find last node */
		temp = *head;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}

		temp->next = newNode;
	}

	return (*head);
}
