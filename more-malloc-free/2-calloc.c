#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: byte size of each array element
 * Return: a pointer to the allocated memory, NUll if fail
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *f;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	mem = malloc(size * nmemb);

	if (mem == NULL)
	{
		return (NULL);
	}

	f = mem;

	for (i = 0; i < (size * nmemb); i++)
	{
		f[i] = '\0';
	}

	return (mem);
}
