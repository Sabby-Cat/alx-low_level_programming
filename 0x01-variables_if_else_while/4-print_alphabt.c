#include <stdio.h>
/**
 * main - prints lower case ulphabet except q and e
 *
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'e' || c == 'q')
		{
			;
		}
		else
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
