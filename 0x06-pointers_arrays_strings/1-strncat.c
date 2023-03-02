#include "main.h"
#include "string.h"
/**
 * _strncat - concatenates 2 strings
 * @dest: string being added to
 * @src: string being added
 * @n: nr of char of source being added
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[strlen(dest) + i] = src[i];
	}
	if (strlen(src) < n)
		dest[strlen(dest) + i] = '\0'
	return (dest);
}
