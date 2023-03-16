#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked -allocate memory of size b
 * @b: size
 * Return: pointer to space
 */
void *malloc_checked(unsigned int b)
{
	void *r = malloc(b);

	if (r == NULL)
		exit(98);
	return (r);
}
