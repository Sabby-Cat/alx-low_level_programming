#include <stdio.h>
/**
 * main - all unique pairs of nrs
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i < 57; i++)
	{
		for (j = 49; j < 58; j++)
		{
			if (i >= j)
			{
				;
			}
			else
			{
				putchar(i);
				putchar(j);
				if (j == 57 && i == 56)
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
