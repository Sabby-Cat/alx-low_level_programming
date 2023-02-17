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

	for (i = 0; i < 9; i++)
	{
		for (j = 1; j < 10; j++)
		{
			if (i >= j)
			{
				;
			}
			else
			{
				putchar(i);
				putchar(j);
				if (j == 9 && i == 8)
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
