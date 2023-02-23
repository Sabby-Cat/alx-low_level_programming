#include "main.h"
/**
 * print_line - prints _ n times, if higher than zero and new line
 * @n: number of times
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
