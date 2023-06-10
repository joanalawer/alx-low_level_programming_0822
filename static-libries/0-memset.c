#include "main.h"
/**
 * _memset - function fills the first n bytes of the memory area pointed to
 * by s with the constant byte b
 * @s: pointer to the block of memory to fill
 * @b: value to be set
 * @n: number of bytes to be set to the value
 * Return: return a pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *ptr = s;

	for (i = 0; i < n; i++)
	{
		*ptr++ = b;
	}

	return (s);
}
