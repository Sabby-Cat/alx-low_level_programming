#include "main.h"
/**
 * flip_bits - nr changed to get from 1 nr to another
 * @n: nr
 * @m: other nr
 * Return: ans
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int d;
	int c = 0;

	d = n ^ m;
	while (d)
	{
		c++;
		d &= (d - 1);
	}
	return (c);
}
