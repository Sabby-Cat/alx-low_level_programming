#include "main.h"
#include <string.h>
/**
 * _strncat - concatenates 2 strings
 * @dest: string being added to
 * @src: string being added
 * @n: nr of char of source being added
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, le = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[le + i] = src[i];
	}
	dest[le + i] = '\0';
	return (dest);
}
