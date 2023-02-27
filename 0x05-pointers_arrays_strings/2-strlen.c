#include "main.h"
/**
 * _strlen - finds length of string
 * @s: char array being tested
 * Return: length of string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
