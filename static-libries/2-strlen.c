#include "main.h"
/**
 * _strlen - returns length of a string
 * @s: String to be counted
 * Return: integer length
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (*s != 0)
	{
		i++;
		s++;
	}

	return (i);
}

