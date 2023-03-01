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
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[strlen(dest) + i] = src[i];
	}
	return (dest);
}
