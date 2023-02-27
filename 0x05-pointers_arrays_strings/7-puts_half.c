#include "main.h"
#include <string.h>
/**
 * puts_half - prints 2nd half of string
 * @str: string being printed
 */
void puts_half(char *str)
{
	int i, l, h;

	l = strlen(str);
	if (l % 2 != 0)
	{
		h = l / 2 + 1;
	}
	else
	{
		h = l / 2;
	}
	for (i = h; i < l; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
