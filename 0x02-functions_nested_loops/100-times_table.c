#include "main.h"
/**
 * print_times_table - print times table of give nr(between 0 and 15)
 * @n: n times table
 */
void print_times_table(int n)
{
	int i, j, a;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				a = j * i;
				if (j == 0)
				{
					_putchar(a + '0');
				} else if (a < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(a + '0');
				} else if (a >= 10 && a < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((a / 10) + '0');
					_putchar((a % 10) + '0');
				} else
				{
					_putchar(',');
					_putchar(' ');
					_putchar((a / 100) + '0');
					_putchar(((a / 10) % 10) + '0');
					_putchar((a % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
