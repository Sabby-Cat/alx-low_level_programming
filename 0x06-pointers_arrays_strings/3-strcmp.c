#include "main.h"
/**
 * _strcmp - compares 2 string
 * @s1: string beingg compared
 * @s2: string being compared
 * Return: int diff between s1 and s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, d = 0;

	while (s1[i] != '\0' && d == 0)
	{
		d = s1[i] - s2[i];
		i++;
	}
	return (d);
}
