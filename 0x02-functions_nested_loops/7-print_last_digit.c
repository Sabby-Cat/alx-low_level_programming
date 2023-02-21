#include "main.h"
/**
 * print_last_digit - finds last dig of nr
 * @n: number being concidered
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int c;

	if (n < 0)
	{
		c = (n * -1) % 10;
	}
	else
	{
		c = n % 10;
	}
	_putchar('0' + c);
	return (c);
}
