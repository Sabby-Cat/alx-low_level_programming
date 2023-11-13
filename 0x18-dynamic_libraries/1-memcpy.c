#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: coppied to
 * @src: coppied from
 * @n: nr of bytes to be coppied
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
