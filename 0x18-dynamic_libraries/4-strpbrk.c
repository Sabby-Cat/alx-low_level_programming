#include "main.h"
/**
 * _strpbrk - searches a string for set of bytes
 * @s: string to search
 * @accept: bytes to search for
 * Return: one of the bytes in s or Null
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return ('\0');
}
