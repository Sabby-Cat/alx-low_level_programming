#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates array of size slots filled with c
 * @size: size of array
 * @c: char to fill array
 * Return: NULL if fail else char array
 */
char *create_array(unsigned int size, char c)
{
	char *ca;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ca = malloc(sizeof(c) * size);
	if (ca == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ca[i] = c;
	}
	return (ca);
}
