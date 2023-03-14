#include "main.h"
#include <stdlib.h>
/**
 * ch_free_grid - frees a 2d grid
 * @grid: grid to be cleared
 * @height: height of grid to be cleared
 */
void ch_free_grid(char **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		while (height >= 0)
		{
			free(grid[height]);
			height--;
		}
		free(grid);
	}
}

/**
 * strtow - splits a function into words
 * @str: string array
 * Return: array of strings
 */
char **strtow(char *str)
{
	char **ret;
	int i, j, c, a1, ht = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = 0; str[c] != '\0'; c++)
	{
		if (str[c] != ' ' && (str[c + 1] == ' ' ||
					str[c + 1] == '\0'))
		ht++;
	}
	ret = malloc((ht + 1) * sizeof(char *));
	if (ret == NULL || ht == 0)
	{
		free(ret);
		return (NULL);
	}
	for (i = a1 = 0; i < ht; i++)
	{
		for (c = a1; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				a1++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				ret[i] = malloc((c - a1 + 2) * sizeof(char));
				if (ret[i] == NULL)
				{
					ch_free_grid(ret, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; a1 <= c; a1++, j++)
			ret[i][j] = str[a1];
		ret[i][j] = '\0';
	}
	ret[i] = NULL;
	return (ret);
}
