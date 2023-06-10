#include "main.h"
/**
 * _memcpy - function copies n bytes from memory area src to memory area dest
 * @dest: area where bytes is coppied to
 * @src: area where bytes id copied from
 * @n: number of bytes to be copied to the value
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptrDest = dest;
	char *ptrSrc = src;

	while (n--)
	{
		*ptrDest++ = *ptrSrc++;
	}

	return (dest);
}
