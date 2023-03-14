#include "main.h"
#include <stdlib.h>
/**
 * strtow - splits a function into words
 * @str: string array
 * Return: array of strings
 */
char **strtow(char *str)
{
	char **ret;
	int i, j, h = 0, ht = 0, tot = 0;
	char *s;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' ||
					str[i + 1] == '\0'))
		ht++;
	}
	ret = malloc(ht * sizeof(char *));
	if (ret == NULL || ht == 0)
	{
		free(ret);
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		while (str[i] != ' ' && str[i + 1] != '\0')
			{
				s[tot] += str[i];
				tot++;
				i++;
			}
		if (i > 0 && str[i] == ' ' && str[i - 1] != ' ')
		{
			ret[h] = malloc((tot + 1) * sizeof(char));
			if (ret[h] == NULL)
			{
				free(ret);
				return (NULL);
			}
			for (j = 0; s[j] != '\0'; j++)
				ret[h][j] = s[j];
			h++;
			tot = 0;
			*s = '\0';
		}
	}
	s[tot] += str[i];
	for (j = 0; s[j] != '\0'; j++)
		ret[h][j] = s[j];
	return (ret);
}
