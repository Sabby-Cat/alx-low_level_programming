#include "main.h"
#include <stdlib.h>
/**
 * set_bit - sets bit at index to 1
 * @n: nr
 * @index: position
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n |= (1 << index);
	return (1);
}
