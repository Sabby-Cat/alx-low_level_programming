#include <stdio.h>
/**
 * main - prints hexadecimal nrs
 *
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = '1'; c <= '9'; c++)
	{
		putchar(c);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	return (0);
}
