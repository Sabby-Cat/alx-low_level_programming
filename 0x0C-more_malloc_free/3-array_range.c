#include "main.h"
#include <stdlib.h>
/**
 * array_range - array start with min and end with max
 * @min: min nr
 * @max: max nr
 * Return: pointer to int array
 */
int *array_range(int min, int max)
{
	int *ret;
	int i;

	if (min > max)
		return (NULL);

	ret = malloc(sizeof(*ret) * ((max - min) + 1));

	if (ret == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
	{
		ret[i] = min;
	}
	return (ret);
}
