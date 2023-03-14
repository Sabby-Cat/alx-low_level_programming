#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - combines all argumentd
 * @ac: int
 * @av: str arr
 * Return: null or string
 */
char *argstostr(int ac, char **av)
{
	char *ret;
	int i, j, tot = 0, c = 0;

	if (ac == 0)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);
		tot += strlen(av[i]) + 1;
	}
	ret = malloc((tot + 1) * sizeof(char));
	if (ret == NULL)
	{
		free(ret);
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ret[c] = av[i][j];
			c++;
		}
		ret[c] = '\n';
		c++;
	}
	ret[c] = '\0';
	return (ret);
}
