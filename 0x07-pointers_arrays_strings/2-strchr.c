#include "main.h"
/**
 * _strchr - locates char in string
 * @s: string to be searched
 * @c: character being searched
 * Return: from first instance of char in string
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	if (s[i] == c)
	{
		return (&s[i]);
	}
	return ('\0');
}
