#include "main.h"
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
		dest[i] = src[i];
	}
	return (dest);
}
