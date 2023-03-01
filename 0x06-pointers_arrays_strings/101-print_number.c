#include "main.h"
/**
 * print_number - prints an integer
 * @n: number to be printed
 */
void print_number(int n)
{
	unsigned int m;

	if (n < 0)
	{
		m = -n;
		_putchar('-');
	}
	else
	{
		m = n;
	}
	if (m / 10 > 0)
	{
		print_number(m / 10);
	}
	_putchar((m % 10) + '0');
}
