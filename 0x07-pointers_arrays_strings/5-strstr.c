#include "main.h"
/**
 * _strstr - locates a substring in string
 * @haystack: string to search
 * @needle: substring to be found
 * Return: found word or 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return (haystack);
	}

	return (0);
}
