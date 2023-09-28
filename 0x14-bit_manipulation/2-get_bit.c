#include "main.h"
/**
 * get_bit - gets value of bit at index
 * @n: nr
 * @index: position
 * Return: n(index) or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{

	unsigned long int ret;

	if (index > 64)
		return (-1);

	ret = n >> index;
	return (ret & 1);
}
