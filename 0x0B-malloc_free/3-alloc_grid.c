#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - creates a 2d array of ints
 * @width: width of rec
 * @height: height of rec
 * Return: grid or null
 */
int **alloc_grid(int width, int height)
{
	int **ret;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	ret = malloc(height * sizeof(int *));
	if (ret == NULL)
	{
		free(ret);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ret[i] = malloc(width * sizeof(int));
		if (ret[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(ret[i]);
			free(ret);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ret[i][j] = 0;
		}
	}
	return (ret);
}
