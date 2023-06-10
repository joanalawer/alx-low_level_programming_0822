#include "main.h"
/**
 * _strstr - function locates a string
 * @haystack: string to be checked
 * @needle: substring
 * Return: Returns a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int h, n;

	h = 0;
	n = 0;

	while (haystack[h])
	{
		while (needle[n])
		{
			if (haystack[h + n] != needle[n])
			{
				break;
			}
			n++;
		}
		if (needle[n] == '\0')
		{
			return (haystack + h);
		}
		h++;
	}

	return (0);
}
