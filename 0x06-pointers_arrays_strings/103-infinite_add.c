#include "main.h"
#include <string.h>
/**
 * rev_string - reverses a string
 * @s: string being reversed
 */
void rev_string(char *s)
{
	int i, l, j;
	char tmp;

	l = strlen(s);
	j = 0;
	for (i = l - 1; i >= l / 2; i--)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		j++;
	}
}

/**
 * infinite_add - adds n1 and n2 in r
 * @n1: num to be added
 * @n2: num to be added
 * @r: return buffer
 * @size_r: size of r
 * Return: 0 or r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a = strlen(n1), b = strlen(n2), v1, v2,
	    tmp, e = 0, p = 0;

	if (size_r <= a || size_r <= b)
		return (0);
	while (a >= 0 || b >= 0 || overflow == 1)
	{
		if (a < 0)
			v1 = 0;
		else
			v1 = n1[a] - '0';
		if (b < 0)
			v2 = 0;
		else
			v2 = n2[b] - '0';
		tmp = v1 + v2 + e;
		if (tmp >= 10)
			e = 1;
		else
			e = 0;
		r{p} = (tmp % 10) + '0';
		p++;
		a--;
		b--;
	}
	rev_string(r);
	return (r);
}
