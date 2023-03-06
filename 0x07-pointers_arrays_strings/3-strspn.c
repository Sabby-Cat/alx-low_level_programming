#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: string
 * @accept: only bytes from this
 * Return: nr of bytes in initial segment of s, only bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, b;

	for (i = 0; s[i] != '\n'; i++)
	{
		b = 1;
		for (j = 0; accept[j] != '\n'; j++)
		{
			if (s[i] == accept[j])
			{
				b = 0;
				break;
			}
		}
		if (b == 1)
		{
			break;
		}
	}
	return (i);
}
