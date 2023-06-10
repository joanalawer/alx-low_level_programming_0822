#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - function concatenates all the arguments of program.
 * @ac: args count
 * @av: arguments
 * Return: pointer to string, NULL on failure
 */
char *argstostr(int ac, char **av)
{
	char *str, *temp;
	int i, j, len;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	len = 0;

	for (i = 0; i < ac; i++)
	{
		temp = *(av + i);
		for (j = 0; temp[j]; j++)
		{
			len++;
		}

		len += 1;
	}

	str = malloc(sizeof(char) * len + 1);
	len = 0;

	for (i = 0; i < ac; i++)
	{
		temp = *(av + i);

		for (j = 0; temp[j]; ++j)
		{
			str[len] = temp[j];
			len++;
		}
			str[len] = '\n';
			len++;
	}
	str[len] = '\0';
	return (str);
}
