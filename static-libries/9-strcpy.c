#include "main.h"
/**
 * _strcpy - Copies string from src to buffer pointed by dest
 * @dest: Where string is copied to
 * @src: Where string is copied from
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i++] = 0;

	return (dest);
}
