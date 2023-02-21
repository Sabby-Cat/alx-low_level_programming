#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints from start nr to 98
 * @n: number to start with
 * Return: nothing
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i == 98)
			{
				printf("%d\n", i);
			}
			else
			{
				printf("%d, ", i);
			}
		}
	}
	else if (n == 98)
	{
		printf("%d\n", n);
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			if (i == 98)
			{
				printf("%d\n", i);
			}
			else
			{
			printf("%d, ", i);
			}
		}
	}
}
