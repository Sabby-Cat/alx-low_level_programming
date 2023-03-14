#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: string or null
 */
char *str_concat(char *s1, char *s2)
{
	char *ret;
	int l1, l2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	l1 = strlen(s1);
	l2 = strlen(s2);
	ret = malloc(sizeof(char) * (l1 + l2 + 1));

	if (ret == NULL)
	{
		free(ret);
		return (NULL);
	}
	for (i = 0; i < l1; i++)
	{
		ret[i] = s1[i];
	}
	for (j = 0; j < l2; j++, i++)
	{
		ret[i] = s2[j];
	}
	return (ret);
}
