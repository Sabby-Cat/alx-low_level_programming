#include "main.h"
/**
 * print_last_digit - finds last dig of nr
 * @n: number being concidered
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int c;

	c = n % 10;
	if (c < 0)
	{
		c *= -1;
	{
	_putchar('0' + c);
	return (c);
}
