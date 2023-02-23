#include "main.h"
/**
 * print_most_numbers - prints 0-9 except 2 and 4
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2)
		{
			;
		}
		else if (i == 4)
		{
			;
		}
		else
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
