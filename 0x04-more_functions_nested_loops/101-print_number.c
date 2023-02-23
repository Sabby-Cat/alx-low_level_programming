#include "main.h"
/**
 * print_number - prints an integer
 * @n: number to be printed
 */
void print_number(int n)
{
	int m;

	if (n < 0)
	{
		m = -n;
	}
	else
	{
		m = n;
	}
	if (m < 10)
	{
		_putchar(m + '0');
	}
	if (m >= 10 && m < 100)
	{
		_putchar((m / 10) + '0');
		_putchar((m % 10) + '0');
	}
	if (m >= 100 && m < 1000)
	{
		_putchar((m / 100) + '0');
		_putchar((m / 10) % 10 + '0');
		_putchar((m % 10) + '0');
	}
	if (m >= 1000 && m < 10000)
	{
		_putchar((m / 1000) + '0');
		_putchar((m / 100) % 10 + '0');
		_putchar((m / 10) % 10 + '0');
		_putchar((m % 10) + '0');
	}
}
