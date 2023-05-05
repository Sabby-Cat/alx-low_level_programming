#include "main.h"
/**
 * print_binary - prints binary of a number
 * @n: nr
 */
void print_binary(unsigned long int n)
{
	int i, c = 0;
	unsigned long int b;

	for (i = 63; i >= 0; i--)
	{
		b = n >> i;

		if (b & 1)
		{
			_putchar('1');
			c++;
		}
		else if (c)
			_putchar('0');
	}
	if (!c)
		_putchar('0');
}
