#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: appointed memory area
 * @b: constant
 * @n: nr of bytes
 * Return: pointer area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
