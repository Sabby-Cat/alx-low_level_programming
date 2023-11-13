#include "main.h"
/**
 * _strcpy - copys source string into dest string
 * @dest: copied string
 * @src: string being copied
 * Return: dest pointer info
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
