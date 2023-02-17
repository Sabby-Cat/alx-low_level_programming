#include <stdio.h>
/**
 * main - prints 1-9 seperated by comma+ space
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i == 57)
		{
			;
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
