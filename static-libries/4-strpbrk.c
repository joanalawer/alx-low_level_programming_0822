#include "main.h"
/**
 * _strpbrk - function searches a string for any of a set of bytes
 * @s: pointer to string s
 * @accept: pointer to string accept
 * Return: pointer to the byte s that matches one of the bytes in accept.
 * else NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	i = 0;

	while (s[i] != '\0')
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return ((s + i));
			}
			j++;
		}
		i++;
	}

	return (0);
}
