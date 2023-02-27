#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string being reversed
 */
void rev_string(char *s)
{
	int i, l, j;
	char tmp;

	l = _strlen(s);
	j = 0;
	for (i = l - 1; i >= l / 2; i--)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		j++;
	}
}
