#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * string_nconcat - adds n bytes of s2 to s1
 * @s1: string being added to
 * @s2: string of which n bytes aded
 * @n: first n bytes
 * Return: pointer to newly allocated space
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ret;
	int i, l1, l2, tot;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	l1 = strlen(s1);
	l2 = strlen(s2);
	if (l2 > n)
		n = l2;

	tot = l1 + n;
	ret = malloc(tot + 1);
	if (ret == NULL)
		return (NULL);

	for (i = 0; i < tot; i++)
	{
		if (i < l1)
			ret[i] = s1[i];
		else
			ret[i] = s2[i - l1];
	}
	ret[i] = '\0';
	return (ret);
}
