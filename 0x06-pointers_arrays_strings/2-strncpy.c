#include "main.h"
#include "string.h"
/**
 * _strncpy - copys src into dest
 * @dest: copy of src
 * @src: ino to copy from
 * @n: number of char to copy
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (strlen(src) < i)
			dest[i] = src[i];
		else
			dest[i] = '\0';
	}
	return (dest);
}
