#include "main.h"
#include <string.h>
/**
 * _strcat - concatenates 2 strings
 * @dest: string being added to
 * @src: string being added
 * Return: *dest
 */
char *_strcat(char *dest, char *src)
{
	int i, le = strlen(dest);

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[le + i] = src[i];
	}
	dest[le + i] = '\0';
	return (dest);
}
