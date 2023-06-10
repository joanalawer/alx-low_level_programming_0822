#include <stdio.h>
#include "lists.h"
#include <string.h>
/**
 * add_node - adds a new node ath the beginning of a list_t list
 * @head: pointer to head
 * @str: pointer to string to be added
 * Return: address of new element, NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	char *duplicate;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	duplicate = strdup(str);
	if (duplicate == NULL)
	{
		free(new);
		return (NULL);
	}
	for (len = 0; str[len];)
	{
		len++;
	}
	new->str = duplicate;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
