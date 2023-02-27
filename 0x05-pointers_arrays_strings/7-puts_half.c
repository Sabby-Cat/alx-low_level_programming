#include "main.h"
#include <string.h>
/**
 * puts_half - prints 2nd half of string
 * @str: string being printed
 */
void puts_half(char *str)
{
	int i, l;

	l = strlen(str);
	for (i = (l / 2); i < l; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
