#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for nmemb elements of size
 * @nmemb: array
 * @size: size of arrays elements
 * Return: pointer to array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *r;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	r = malloc(nmemb * size);
	if (r == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
	{
		r[i] = 0;
	}
	return (r);
}
