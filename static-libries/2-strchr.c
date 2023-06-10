#include "main.h"
/**
 * _strchr - function locates a character in a string
 * @s: String from which character is located
 * @c: character to be located
 * Return: a pointer character c in s, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	while (s[0] != '\0')
	{
		if (s[0] == c)
		{
			return (s);
		}
		else if (s[1] == c)
		{
			return (s + 1);
		}
		s++;
	}

	return (s + 1);
}
