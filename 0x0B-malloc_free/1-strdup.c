#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - creates a duplicate string
 * @str: string to duplicate
 * Return: NULL if fail else pointer to dupe string
 */
char *_strdup(char *str)
{
	char *ret;
	unsigned int i, size;

	if (str == NULL)
		return (NULL);

	size = strlen(str);
	ret = malloc(sizeof(char) * size + 1);

	if (ret == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ret[i] = str[i];
	}
	return (ret);
}
