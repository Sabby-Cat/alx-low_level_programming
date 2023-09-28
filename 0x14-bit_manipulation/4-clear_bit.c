#include "main.h"
#include <stdlib.h>
/**
 * clear_bit - sets bit to 0
 * @n: nr
 * @index: position
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
